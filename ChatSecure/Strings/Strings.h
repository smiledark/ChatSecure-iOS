#import "OTRLanguageManager.h"

// DO NOT EDIT THIS FILE. EDIT strings.json then run python StringsConverter.py

#define errSSLCryptoString [OTRLanguageManager translatedString: @"Underlying cryptographic error"]
#define OFFLINE_STRING [OTRLanguageManager translatedString: @"Offline"]
#define ERROR_STRING [OTRLanguageManager translatedString: @"Error!"]
#define LOGOUT_STRING [OTRLanguageManager translatedString: @"Log Out"]
#define DELETE_CONVERSATIONS_ON_DISCONNECT_TITLE_STRING [OTRLanguageManager translatedString: @"Auto-delete"]
#define DONE_STRING [OTRLanguageManager translatedString: @"Done"]
#define noErrString [OTRLanguageManager translatedString: @"No Error"]
#define CHATSECURE_PUSH_STRING [OTRLanguageManager translatedString: @"ChatSecure Push"]
#define CONVERSATION_NO_LONGER_SECURE_STRING [OTRLanguageManager translatedString: @"The conversation with %@ is no longer secure."]
#define USER_PASS_BLANK_STRING [OTRLanguageManager translatedString: @"You must enter a username and a password to login."]
#define THEIR_FINGERPRINT_STRING [OTRLanguageManager translatedString: @"Purported fingerprint for"]
#define errSSLPeerAuthCompletedString [OTRLanguageManager translatedString: @"Peer cert is valid, or was ignored if verification disabled"]
#define PASSWORD_STRING [OTRLanguageManager translatedString: @"Password"]
#define ADVANCED_STRING [OTRLanguageManager translatedString: @"Advanced"]
#define OTRL_MSGEVENT_ENCRYPTION_REQUIRED_STRING [OTRLanguageManager translatedString: @"Our policy requires encryption but we are trying to send an unencrypted message out."]
#define VERSION_STRING [OTRLanguageManager translatedString: @"Version"]
#define ACCOUNT_DISCONNECTED_STRING [OTRLanguageManager translatedString: @"Account Disconnected"]
#define INITIATE_ENCRYPTED_CHAT_STRING [OTRLanguageManager translatedString: @"Initiate Encrypted Chat"]
#define INVALID_EMAIL_TITLE_STRING [OTRLanguageManager translatedString: @"Invalid Email"]
#define OTRL_MSGEVENT_CONNECTION_ENDED_STRING [OTRLanguageManager translatedString: @"Message has not been sent because our buddy has ended the private conversation. We should either close the connection, or refresh it."]
#define ACCOUNT_DISCONNECTED_DESCRIPTION_STRING [OTRLanguageManager translatedString: @"Please log into this account before managing requests."]
#define ADD_STRING [OTRLanguageManager translatedString: @"Add"]
#define OTRL_MSGEVENT_RCVDMSG_FOR_OTHER_INSTANCE_STRING [OTRLanguageManager translatedString: @"Received and discarded a message intended for another instance."]
#define OPEN_IN_TWITTER_STRING [OTRLanguageManager translatedString: @"Open in Twitter"]
#define TWITTER_STRING [OTRLanguageManager translatedString: @"Twitter"]
#define CONNECTED_STRING [OTRLanguageManager translatedString: @"Connected"]
#define TOR_WARNING_MESSAGE_STRING [OTRLanguageManager translatedString: @"Tor is an experimental feature, please use with caution."]
#define EXTENDED_AWAY_STRING [OTRLanguageManager translatedString: @"Extended Away"]
#define OTRL_MSGEVENT_MSG_REFLECTED_STRING [OTRLanguageManager translatedString: @"Received our own OTR messages."]
#define errSSLClosedNoNotifyString [OTRLanguageManager translatedString: @"Server closed session with no notification"]
#define PUBLIC_KEY_ERROR_STRING [OTRLanguageManager translatedString: @"Could not retrieve public key from certificate"]
#define OTRL_MSGEVENT_RCVDMSG_NOT_IN_PRIVATE_STRING [OTRLanguageManager translatedString: @"Received an encrypted message but cannot read it because no private connection is established yet."]
#define NEW_CERTIFICATE_STRING [OTRLanguageManager translatedString: @"New SSL Certificate"]
#define LOGIN_STRING [OTRLanguageManager translatedString: @"Log In"]
#define CANCEL_STRING [OTRLanguageManager translatedString: @"Cancel"]
#define LOGIN_AUTOMATICALLY_STRING [OTRLanguageManager translatedString: @"Login Automatically"]
#define errSSLPeerDecodeErrorString [OTRLanguageManager translatedString: @"Decoding error"]
#define iOS_SSL_ERROR_PART1_STRING [OTRLanguageManager translatedString: @"Your current iOS system version (%@) contains a serious security vulnerability. Please update to the latest version as soon as possible."]
#define errSSLRecordOverflowString [OTRLanguageManager translatedString: @"Record overflow"]
#define errSSLDecryptionFailString [OTRLanguageManager translatedString: @"Decryption failure"]
#define CONNECT_EXISTING_STRING [OTRLanguageManager translatedString: @"Connect to Existing Account"]
#define GITHUB_STRING [OTRLanguageManager translatedString: @"GitHub"]
#define OPEN_IN_FACEBOOK_STRING [OTRLanguageManager translatedString: @"Open in Facebook"]
#define errSSLHostNameMismatchString [OTRLanguageManager translatedString: @"Peer host name mismatch"]
#define CONVERSATION_SECURE_WARNING_STRING [OTRLanguageManager translatedString: @"This chat is secured"]
#define PINNED_CERTIFICATES_STRING [OTRLanguageManager translatedString: @"Pinned Certificates"]
#define DELETE_ACCOUNT_MESSAGE_STRING [OTRLanguageManager translatedString: @"Permanently delete"]
#define OTRL_MSGEVENT_RCVDMSG_GENERAL_ERR_STRING [OTRLanguageManager translatedString: @"Received a general OTR error."]
#define CREATED_BY_STRING [OTRLanguageManager translatedString: @"Created by"]
#define UNLOCKED_ALERT_STRING [OTRLanguageManager translatedString: @"The conversation is not secure"]
#define SAVE_STRING [OTRLanguageManager translatedString: @"Save"]
#define errSSLNoRootCertString [OTRLanguageManager translatedString: @"Cert chain not verified by root"]
#define ACCOUNTS_STRING [OTRLanguageManager translatedString: @"Accounts"]
#define PENDING_APPROVAL_STRING [OTRLanguageManager translatedString: @"Pending Approval"]
#define errSSLPeerDecryptionFailString [OTRLanguageManager translatedString: @"Decryption failed"]
#define JABBER_STRING [OTRLanguageManager translatedString: @"Jabber (XMPP)"]
#define VERIFY_STRING [OTRLanguageManager translatedString: @"Verify"]
#define errSSLCertExpiredString [OTRLanguageManager translatedString: @"Chain had an expired cert"]
#define errSSLBadConfigurationString [OTRLanguageManager translatedString: @"Configuration error"]
#define ADD_BUDDY_STRING [OTRLanguageManager translatedString: @"Add Buddy"]
#define errSSLClientCertRequestedString [OTRLanguageManager translatedString: @"Server has requested a client cert"]
#define XMPP_TOR_STRING [OTRLanguageManager translatedString: @"XMPP + Tor"]
#define REGISTER_ERROR_STRING [OTRLanguageManager translatedString: @"Error Registering Username"]
#define OTRL_MSGEVENT_RCVDMSG_UNREADABLE_STRING [OTRLanguageManager translatedString: @"Cannot read the received message."]
#define errSSLPeerProtocolVersionString [OTRLanguageManager translatedString: @"Bad protocol version"]
#define TOR_DOMAIN_WARNING_MESSAGE_STRING [OTRLanguageManager translatedString: @"Only one Tor account per domain is supported at this time."]
#define CHANGE_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"Change Passphrase"]
#define RECENT_STRING [OTRLanguageManager translatedString: @"Recent"]
#define errSSLBufferOverflowString [OTRLanguageManager translatedString: @"Insufficient buffer provided"]
#define COPY_STRING [OTRLanguageManager translatedString: @"Copy"]
#define CONNECTING_STRING [OTRLanguageManager translatedString: @"Connecting"]
#define LOCKED_WARN_STRING [OTRLanguageManager translatedString: @"The fingerprint has not been verified"]
#define UNLOCK_STRING [OTRLanguageManager translatedString: @"Unlock"]
#define DONATE_MESSAGE_STRING [OTRLanguageManager translatedString: @"Your donation will help fund the continued development of ChatSecure."]
#define DONATE_STRING [OTRLanguageManager translatedString: @"Donate"]
#define REJECT_STRING [OTRLanguageManager translatedString: @"Reject"]
#define errSSLIllegalParamString [OTRLanguageManager translatedString: @"Illegal parameter"]
#define CREATE_STRING [OTRLanguageManager translatedString: @"Create"]
#define RESOURCE_STRING [OTRLanguageManager translatedString: @"Resource"]
#define errSSLPeerAccessDeniedString [OTRLanguageManager translatedString: @"Access denied"]
#define errSSLPeerInternalErrorString [OTRLanguageManager translatedString: @"Internal error"]
#define OTRL_MSGEVENT_ENCRYPTION_ERROR_STRING [OTRLanguageManager translatedString: @"An error occured while encrypting a message and the message was not sent."]
#define RELEASE_TO_DELETE_STRING [OTRLanguageManager translatedString: @"Release to delete"]
#define PHOTO_LIBRARY_STRING [OTRLanguageManager translatedString: @"Photo Library"]
#define VERIFY_FINGERPRINT_STRING [OTRLanguageManager translatedString: @"Verify Fingerprint"]
#define SAVED_CERTIFICATES_STRING [OTRLanguageManager translatedString: @"Saved Certificates"]
#define NEW_ACCOUNT_STRING [OTRLanguageManager translatedString: @"New Account"]
#define DOMAIN_BLANK_ERROR_STRING [OTRLanguageManager translatedString: @"Domain needs to be set"]
#define LOCKED_SECURE_STRING [OTRLanguageManager translatedString: @"The conversation is secure and the fingerprint is verfied"]
#define QR_CODE_STRING [OTRLanguageManager translatedString: @"QR code"]
#define AWAY_MESSAGE_STRING [OTRLanguageManager translatedString: @"is now away"]
#define FACEBOOK_REMOVED_STRING [OTRLanguageManager translatedString: @"Facebook account removed"]
#define AWAY_STRING [OTRLanguageManager translatedString: @"Away"]
#define HOSTNAME_STRING [OTRLanguageManager translatedString: @"Hostname"]
#define errSSLPeerInsufficientSecurityString [OTRLanguageManager translatedString: @"Insufficient security"]
#define iOS_SSL_ERROR_TITLE_STRING [OTRLanguageManager translatedString: @"iOS Vulnerability"]
#define HOLD_TO_TALK_STRING [OTRLanguageManager translatedString: @"Hold to talk"]
#define SKIP_STRING [OTRLanguageManager translatedString: @"Skip"]
#define SEARCH_STRING [OTRLanguageManager translatedString: @"Search"]
#define AIM_STRING [OTRLanguageManager translatedString: @"OSCAR Instant Messenger"]
#define DISCONNECTION_WARNING_DESC_STRING [OTRLanguageManager translatedString: @"1 Minute Alert Before Disconnection"]
#define OTRL_MSGEVENT_MSG_RESENT_STRING [OTRLanguageManager translatedString: @"The previous message was resent."]
#define CONNECT_STRING [OTRLanguageManager translatedString: @"Connect"]
#define PAYMENTS_SETUP_ERROR_STRING [OTRLanguageManager translatedString: @"This device doesn't seem to be configured to make payments."]
#define errSSLPeerRecordOverflowString [OTRLanguageManager translatedString: @"Record overflow"]
#define SECURITY_STRING [OTRLanguageManager translatedString: @"Security"]
#define errSSLPeerCertUnknownString [OTRLanguageManager translatedString: @"Unknown certificate"]
#define ERROR_CREATING_ACCOUNT_STRING [OTRLanguageManager translatedString: @"Error Creating Account"]
#define OTR_FINGERPRINTS_STRING [OTRLanguageManager translatedString: @"OTR Fingerprints"]
#define errSSLPeerCertExpiredString [OTRLanguageManager translatedString: @"Certificate expired"]
#define OTRL_MSGEVENT_SETUP_ERROR_STRING [OTRLanguageManager translatedString: @"A private conversation could not be set up."]
#define errSSLNegotiationString [OTRLanguageManager translatedString: @"Cipher Suite negotiation failure"]
#define errSSLPeerExportRestrictionString [OTRLanguageManager translatedString: @"Export restriction"]
#define errSSLPeerHandshakeFailString [OTRLanguageManager translatedString: @"Handshake failure"]
#define GOOGLE_TALK_STRING [OTRLanguageManager translatedString: @"Google Talk"]
#define OTR_FINGERPRINTS_SUBTITLE_STRING [OTRLanguageManager translatedString: @"Manage OTR fingerprints"]
#define errSSLFatalAlertString [OTRLanguageManager translatedString: @"Fatal alert"]
#define iOS_SSL_ERROR_PART2_STRING [OTRLanguageManager translatedString: @"Settings -> General -> Software Update"]
#define USERNAME_STRING [OTRLanguageManager translatedString: @"Username"]
#define errSSLModuleAttachString [OTRLanguageManager translatedString: @"Module attach failure"]
#define REMEMBER_PASSPHRASE_INFO_STRING [OTRLanguageManager translatedString: @"Your password will be stored in the iOS Keychain of this device only, and is only as safe as your device passphrase or pin. However, it will not persist during a device backup/restore via iTunes, so please don't forget it, or you may lose your conversation history."]
#define SHARE_STRING [OTRLanguageManager translatedString: @"Share"]
#define OPPORTUNISTIC_OTR_SETTING_TITLE [OTRLanguageManager translatedString: @"Auto-start Encryption"]
#define SEND_FEEDBACK_STRING [OTRLanguageManager translatedString: @"Send Feedback"]
#define NAME_STRING [OTRLanguageManager translatedString: @"Name"]
#define BLOCK_STRING [OTRLanguageManager translatedString: @"Block"]
#define ACCOUNT_FINGERPRINTS_STRING [OTRLanguageManager translatedString: @"Account Fingerprints"]
#define OK_STRING [OTRLanguageManager translatedString: @"OK"]
#define OPPORTUNISTIC_OTR_SETTING_DESCRIPTION [OTRLanguageManager translatedString: @"Enables opportunistic OTR"]
#define errSSLUnexpectedRecordString [OTRLanguageManager translatedString: @"Unexpected (skipped) record in DTLS"]
#define PORT_STRING [OTRLanguageManager translatedString: @"Port"]
#define errSSLClosedAbortString [OTRLanguageManager translatedString: @"Connection closed via error"]
#define SUBSCRIPTION_REQUEST_TITLE [OTRLanguageManager translatedString: @"Subscription Requests"]
#define DELETE_ACCOUNT_TITLE_STRING [OTRLanguageManager translatedString: @"Delete Account?"]
#define errSSLPeerDecompressFailString [OTRLanguageManager translatedString: @"Decompression failure"]
#define errSSLPeerUnsupportedCertString [OTRLanguageManager translatedString: @"Bad unsupported cert format"]
#define OTRL_MSGEVENT_RCVDMSG_UNENCRYPTED_STRING [OTRLanguageManager translatedString: @"Received an unencrypted message."]
#define errSSLPeerUnknownCAString [OTRLanguageManager translatedString: @"Unknown Cert Authority"]
#define errSSLBadCipherSuiteString [OTRLanguageManager translatedString: @"Bad SSLCipherSuite"]
#define OFFLINE_MESSAGE_STRING [OTRLanguageManager translatedString: @"is now offline"]
#define errSSLBadRecordMacString [OTRLanguageManager translatedString: @"Bad MAC"]
#define XMPP_FAIL_STRING [OTRLanguageManager translatedString: @"Failed to connect to XMPP server. Please check your login credentials and internet connection and try again."]
#define errSSLPeerNoRenegotiationString [OTRLanguageManager translatedString: @"No renegotiation allowed"]
#define EXPIRATION_STRING [OTRLanguageManager translatedString: @"Background session will expire in one minute."]
#define errSSLInternalString [OTRLanguageManager translatedString: @"Internal error"]
#define YOU_ARE_NOT_CONNECTED_STRING [OTRLanguageManager translatedString: @"You are not connected"]
#define FACEBOOK_STRING [OTRLanguageManager translatedString: @"Facebook"]
#define PUSH_TITLE_STRING [OTRLanguageManager translatedString: @"Push"]
#define DUPLICATE_ACCOUNT_MESSAGE_STRING [OTRLanguageManager translatedString: @"There already exists an account with this username."]
#define errSSLWouldBlockString [OTRLanguageManager translatedString: @"I/O would block (not fatal)"]
#define CONNECTING_TO_TOR_STRING [OTRLanguageManager translatedString: @"Connecting to Tor"]
#define CHAT_STRING [OTRLanguageManager translatedString: @"Chat"]
#define OTRL_MSGEVENT_LOG_HEARTBEAT_RCVD_STRING [OTRLanguageManager translatedString: @"Received a heartbeat."]
#define FACEBOOK_REMOVED_MESSAGE_STRING [OTRLanguageManager translatedString: @"Facebook has remmoved acces to the chat API"]
#define DO_NOT_DISTURB_STRING [OTRLanguageManager translatedString: @"Do Not Disturb"]
#define errSSLProtocolString [OTRLanguageManager translatedString: @"SSL protocol error"]
#define SHARE_MESSAGE_STRING [OTRLanguageManager translatedString: @"Chat with me securely"]
#define OTRL_MSGEVENT_LOG_HEARTBEAT_SENT_STRING [OTRLanguageManager translatedString: @"Sent a heartbeat."]
#define errSSLClosedGracefulString [OTRLanguageManager translatedString: @"Connection closed gracefully"]
#define VALID_CERTIFICATE_STRING [OTRLanguageManager translatedString: @"Valid certificate"]
#define NEW_STRING [OTRLanguageManager translatedString: @"New"]
#define errSSLPeerUnexpectedMsgString [OTRLanguageManager translatedString: @"Unexpected message received"]
#define DELETE_CONVERSATIONS_ON_DISCONNECT_DESCRIPTION_STRING [OTRLanguageManager translatedString: @"Delete chats on disconnect"]
#define CHATS_STRING [OTRLanguageManager translatedString: @"Chats"]
#define HELP_TRANSLATE_STRING [OTRLanguageManager translatedString: @"Help Translate"]
#define NOT_VERIFIED_STRING [OTRLanguageManager translatedString: @"Not Verified"]
#define errSSLPeerDecryptErrorString [OTRLanguageManager translatedString: @"Decryption error"]
#define errSSLBadCertString [OTRLanguageManager translatedString: @"Bad certificate format"]
#define errSSLConnectionRefusedString [OTRLanguageManager translatedString: @"Peer dropped connection before responding"]
#define SECURITY_WARNING_STRING [OTRLanguageManager translatedString: @"Security Warning"]
#define VERIFIED_STRING [OTRLanguageManager translatedString: @"Verified"]
#define BUDDY_INFO_STRING [OTRLanguageManager translatedString: @"Buddy Info"]
#define NEW_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"New Passphrase"]
#define ACCOUNT_STRING [OTRLanguageManager translatedString: @"Account"]
#define QR_CODE_INSTRUCTIONS_STRING [OTRLanguageManager translatedString: @"This QR Code contains a link to http://omniqrcode.com/q/chatsecure and will redirect to the App Store."]
#define REMEMBER_PASSWORD_STRING [OTRLanguageManager translatedString: @"Remember password"]
#define CONVERSATION_NOT_SECURE_WARNING_STRING [OTRLanguageManager translatedString: @"Warning: This chat is not encrypted"]
#define CANCEL_ENCRYPTED_CHAT_STRING [OTRLanguageManager translatedString: @"Cancel Encrypted Chat"]
#define SETTINGS_STRING [OTRLanguageManager translatedString: @"Settings"]
#define ENCRYPTION_ERROR_STRING [OTRLanguageManager translatedString: @"Encryption Error"]
#define LOCKED_ERROR_STRING [OTRLanguageManager translatedString: @"The fingerprint has changed and needs to be verified"]
#define SIGN_UP_STRING [OTRLanguageManager translatedString: @"Sign Up"]
#define REMEMBER_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"Remember Passphrase"]
#define MANAGE_CHATSECURE_PUSH_ACCOUNT_STRING [OTRLanguageManager translatedString: @"Manage ChatSecure Push account"]
#define errSSLPeerBadCertString [OTRLanguageManager translatedString: @"Miscellaneous bad certificate"]
#define OLD_STRING [OTRLanguageManager translatedString: @"Old"]
#define FORGOT_PASSPHRASE_INFO_STRING [OTRLanguageManager translatedString: @"Because the database contents is encrypted with your passphrase, you've lost access to your data and will need to delete and reinstall ChatSecure to continue. Password managers like 1Password or MiniKeePass can be helpful for generating and storing strong passwords."]
#define SOURCE_STRING [OTRLanguageManager translatedString: @"Check out the source here on Github"]
#define DATABASE_PASSPHRASE_CHANGE_SUCCESS_STRING [OTRLanguageManager translatedString: @"The database passphrase change was successful."]
#define errSSLSessionNotFoundString [OTRLanguageManager translatedString: @"Attempt to restore an unknown session"]
#define INFO_STRING [OTRLanguageManager translatedString: @"Info"]
#define OTHER_STRING [OTRLanguageManager translatedString: @"Other"]
#define REPLY_STRING [OTRLanguageManager translatedString: @"Reply"]
#define IN_BAND_ERROR_STRING [OTRLanguageManager translatedString: @"The XMPP server does not support in-band registration"]
#define AVAILABLE_STRING [OTRLanguageManager translatedString: @"Available"]
#define CREATE_NEW_ACCOUNT_STRING [OTRLanguageManager translatedString: @"Create New Account"]
#define errSSLPeerBadRecordMacString [OTRLanguageManager translatedString: @"Bad MAC"]
#define OPTIONAL_STRING [OTRLanguageManager translatedString: @"Optional"]
#define errSSLCertNotYetValidString [OTRLanguageManager translatedString: @"Chain had a cert not yet valid"]
#define errSSLPeerUserCancelledString [OTRLanguageManager translatedString: @"User canceled"]
#define DELIVERED_STRING [OTRLanguageManager translatedString: @"Delivered"]
#define ABOUT_STRING [OTRLanguageManager translatedString: @"About"]
#define REQUIRED_STRING [OTRLanguageManager translatedString: @"Required"]
#define INVALID_EMAIL_DETAIL_STRING [OTRLanguageManager translatedString: @"Please choose a valid email address"]
#define YOUR_FINGERPRINT_STRING [OTRLanguageManager translatedString: @"Fingerprint for you"]
#define COMPOSE_STRING [OTRLanguageManager translatedString: @"Compose"]
#define FORGOT_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"Forgot Passphrase?"]
#define NEXT_STRING [OTRLanguageManager translatedString: @"Next"]
#define DUPLICATE_ACCOUNT_STRING [OTRLanguageManager translatedString: @"Duplicate account"]
#define BASIC_STRING [OTRLanguageManager translatedString: @"Basic"]
#define LANGUAGE_STRING [OTRLanguageManager translatedString: @"Language"]
#define errSSLUnknownRootCertString [OTRLanguageManager translatedString: @"Valid cert chain, untrusted root"]
#define SET_NEW_DATABASE_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"Set new database passphrase"]
#define AVAILABLE_MESSAGE_STRING [OTRLanguageManager translatedString: @"is now available"]
#define OTRL_MSGEVENT_RCVDMSG_MALFORMED_STRING [OTRLanguageManager translatedString: @"The message received contains malformed data."]
#define DATABASE_PASSPHRASE_CHANGE_ERROR_STRING [OTRLanguageManager translatedString: @"An error occurred while changing the database passphrase."]
#define BLOCK_AND_REMOVE_STRING [OTRLanguageManager translatedString: @"Block & Remove"]
#define CREATING_ACCOUNT_STRING [OTRLanguageManager translatedString: @"Creating Account"]
#define DATABASE_SETUP_ERROR_STRING [OTRLanguageManager translatedString: @"An error occurred while setting up the database."]
#define XMPP_PORT_FAIL_STRING [OTRLanguageManager translatedString: @"Domain needs to be set manually when specifying a custom port"]
#define DISCONNECTION_WARNING_TITLE_STRING [OTRLanguageManager translatedString: @"Sign out Warning"]
#define BUDDY_LIST_STRING [OTRLanguageManager translatedString: @"Buddy List"]
#define errSSLPeerCertRevokedString [OTRLanguageManager translatedString: @"Certificate revoked"]
#define VERIFY_LATER_STRING [OTRLanguageManager translatedString: @"Verify Later"]
#define LOGGING_IN_STRING [OTRLanguageManager translatedString: @"Logging in..."]
#define OTRL_MSGEVENT_RCVDMSG_UNRECOGNIZED_STRING [OTRLanguageManager translatedString: @"Cannot recognize the type of OTR message received."]
#define SSL_MISMATCH_STRING [OTRLanguageManager translatedString: @"SSL Hostname Mismatch"]
#define RELEASE_TO_SEND_STRING [OTRLanguageManager translatedString: @"Release to send"]
#define errSSLXCertChainInvalidString [OTRLanguageManager translatedString: @"Invalid certificate chain"]
#define EMAIL_STRING [OTRLanguageManager translatedString: @"Email"]
#define XMPP_USERNAME_EXAMPLE_STRING [OTRLanguageManager translatedString: @"user@example.com"]
#define OPEN_IN_CHROME [OTRLanguageManager translatedString: @"Open in Chrome"]
#define SECURE_CONVERSATION_STRING [OTRLanguageManager translatedString: @"You must be in a secure conversation first."]
#define SHOW_USERVOICE_STRING [OTRLanguageManager translatedString: @"Would you like to connect to UserVoice to send feedback?"]
#define CURRENT_PASSPHRASE_STRING [OTRLanguageManager translatedString: @"Current Passphrase"]
#define SELF_SIGNED_SSL_STRING [OTRLanguageManager translatedString: @"Self Signed SSL"]
#define ABOUT_VERSION_STRING [OTRLanguageManager translatedString: @"About This Version"]
#define USE_CAMERA_STRING [OTRLanguageManager translatedString: @"Take Photo or Video"]
#define BUDDY_FINGERPRINTS_STRING [OTRLanguageManager translatedString: @"Buddy Fingerprints"]
#define PINNED_CERTIFICATES_DESCRIPTION_STRING [OTRLanguageManager translatedString: @"Manage saved SSL certificates"]
#define REMOVE_STRING [OTRLanguageManager translatedString: @"Remove"]
#define DEFAULT_LANGUAGE_STRING NSLocalizedString(@"Default", @"default string to revert to normal language behaviour")