//
//  OTRImagePicker.m
//  ChatSecure
//
//  Created by David Chiles on 1/16/15.
//  Copyright (c) 2015 Chris Ballinger. All rights reserved.
//

#import "OTRAttachmentPicker.h"

#import <MobileCoreServices/MobileCoreServices.h>
#import "Strings.h"
#import "OTRUtilities.h"
#import "UIActionSheet+ChatSecure.h"
#import "UIActionSheet+Blocks.h"

@interface OTRAttachmentPicker () <UINavigationControllerDelegate>

@property (nonatomic, strong) UIImagePickerController *imagePickerController;

@end

@implementation OTRAttachmentPicker

- (instancetype)initWithParentViewController:(UIViewController<UIPopoverPresentationControllerDelegate> *)viewController delegate:(id<OTRAttachmentPickerDelegate>)delegate
{
    if (self = [self init]) {
        _parentViewController = viewController;
        _delegate = delegate;
    }
    return self;
}

- (void)showAlertControllerWithCompletion:(void (^)(void))completion
{
    if (SYSTEM_VERSION_LESS_THAN(@"8.0")) {
        UIActionSheet *actionSheet = [[UIActionSheet alloc] initWithTitle:nil cancelButtonItem:nil destructiveButtonItem:nil otherButtonItems:nil];
        
        if ([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]) {
            RIButtonItem *takePhotoButton = [RIButtonItem itemWithLabel:USE_CAMERA_STRING action:^{
                [[UIApplication sharedApplication] setStatusBarHidden:YES withAnimation:UIStatusBarAnimationSlide];
                [self showImagePickerForSourceType:UIImagePickerControllerSourceTypeCamera];
            }];
            [actionSheet addButtonItem:takePhotoButton];
        }
        
        if ([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypePhotoLibrary]) {
            RIButtonItem *photoLibraryButton = [RIButtonItem itemWithLabel:PHOTO_LIBRARY_STRING action:^{
                [self showImagePickerForSourceType:UIImagePickerControllerSourceTypePhotoLibrary];
            }];
            [actionSheet addButtonItem:photoLibraryButton];
        }
        RIButtonItem *cancelButton = [RIButtonItem itemWithLabel:CANCEL_STRING];

        [actionSheet addButtonItem:cancelButton];
        [actionSheet setCancelButtonIndex:[actionSheet numberOfButtons]-1];
        
        [actionSheet otr_presentInView:self.parentViewController.view];
    }
    else {
        UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:nil preferredStyle:UIAlertControllerStyleActionSheet];
        
        if ([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]) {
            UIAlertAction *takePhotoAction = [UIAlertAction actionWithTitle:USE_CAMERA_STRING style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                [[UIApplication sharedApplication] setStatusBarHidden:YES withAnimation:UIStatusBarAnimationSlide];
                [self showImagePickerForSourceType:UIImagePickerControllerSourceTypeCamera];
            }];
            [alertController addAction:takePhotoAction];
        }
        
        if ([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypePhotoLibrary]) {
            UIAlertAction *openLibraryAction = [UIAlertAction actionWithTitle:PHOTO_LIBRARY_STRING style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                [self showImagePickerForSourceType:UIImagePickerControllerSourceTypePhotoLibrary];
            }];
            [alertController addAction:openLibraryAction];
        }
        
        UIAlertAction *cancelAlertAction = [UIAlertAction actionWithTitle:CANCEL_STRING style:UIAlertActionStyleCancel handler:nil];
        
        [alertController addAction:cancelAlertAction];
        
        alertController.popoverPresentationController.delegate = self.parentViewController;
        
        [self.parentViewController presentViewController:alertController animated:YES completion:completion];
    }
    
    
}

- (void)showImagePickerForSourceType:(UIImagePickerControllerSourceType)sourceType
{
    
    UIImagePickerController *imagePickerController = [[UIImagePickerController alloc] init];
    imagePickerController.modalPresentationStyle = UIModalPresentationCurrentContext;
    imagePickerController.sourceType = sourceType;
    NSArray* mediaTypes = [UIImagePickerController availableMediaTypesForSourceType:sourceType];
    imagePickerController.mediaTypes = mediaTypes;
    imagePickerController.delegate = self;
    
    self.imagePickerController = imagePickerController;
    [self.parentViewController presentViewController:self.imagePickerController animated:YES completion:nil];
}

#pragma - mark UIImagePickerControllerDelegate
- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info
{
    NSString *mediaType = info[UIImagePickerControllerMediaType];
    NSString *imageString = (NSString *)kUTTypeImage;
    NSString *videoString = (NSString *)kUTTypeVideo;
    NSString *movieString = (NSString *)kUTTypeMovie;
    
    if ([mediaType isEqualToString:imageString]) {
        UIImage *editedImage = (UIImage *)info[UIImagePickerControllerEditedImage];
        UIImage *originalImage = (UIImage *)info[UIImagePickerControllerOriginalImage];
        UIImage *finalImage = nil;
        
        if (editedImage) {
            finalImage = editedImage;
        }
        else if (originalImage) {
            finalImage = originalImage;
        }
        
        if ([self.delegate respondsToSelector:@selector(attachmentPicker:gotPhoto:withInfo:)]) {
            [self.delegate attachmentPicker:self gotPhoto:finalImage withInfo:info];
        }
        
        [picker dismissViewControllerAnimated:YES completion:nil];
        self.imagePickerController = nil;
    }
    else if ([mediaType isEqualToString:videoString] || [mediaType isEqualToString:movieString]) {
        NSURL *videoURL = info[UIImagePickerControllerMediaURL];
        if ([self.delegate respondsToSelector:@selector(attachmentPicker:gotVideoURL:)]) {
            [self.delegate attachmentPicker:self gotVideoURL:videoURL];
        }
        [picker dismissViewControllerAnimated:YES completion:nil];
        self.imagePickerController = nil;
    }
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker
{
    [picker dismissViewControllerAnimated:YES completion:nil];
    self.imagePickerController = nil;
}

@end
