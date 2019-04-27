//
//  AppConstants.h
//  ios-objective-c-chat-app
//
//  Created by Budhabhooshan Patil on 18/02/19.
//  Copyright © 2019 Inscripts.com. All rights reserved.
//

#ifndef AppConstants_h
#define AppConstants_h

#import <CometChatPro/CometChatPro-Swift.h>
#import "ListTableViewController.h"
#import "ChatViewController.h"
#import "UIColor+SystemColor.h"
#import "TabBarViewController.h"
#import "UIColor+SystemColor.h"
#import "CreateGroupViewController.h"
#import "AppTheme.h"
#import "HexToRGBConvertor.h"
#import "MessageBubbleView.h"
#import "NSString+TextToSize.h"
#import "NSDate+Utilities.h"
#import "NSString+sentAtToTime.h"
#import "CustomTableViewCell.h"
#import "Avatar.h"
#import "UITableView+scrollToBottom.h"
#import "AppDelegate.h"
#import "ResultsTableController.h"
#import "View Controllers/01_Login/LoginViewController.h"
#import "View Controllers/02_TabBar/TabBarViewController.h"
#import "Manager/CometChatProRequests/CometChatProRequests.h"
#import "AudioVisualizer.h"
#import "AudioVisualizerView.h"			
#import "DemoUsersViewController.h"
#import "ActivityIndicatorView.h"
#import "NSError+Util.h"
#import "DownloadManager.h"
#import "CallManager.h"
#import "InfoPageViewController.h"
#import "EntityDetailsTableViewCell.h"
#import "EntityOtherDetailsTableViewCell.h"
#import "UserInfoPage.h"
#import "GroupInfoPage.h"
#import "NSDate+NVTimeAgo.h"
#endif /* AppConstants_h */
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#define API_KEY             "YOUR_API_KEY_HERE"
#define APP_ID              "YOUR_APP_ID_HERE"

#define IS_LOGGED_IN        "isLoggedin"
#define LOGGED_IN_USER_ID   "logged_in_user_id"
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#if DEBUG == 0
#define DebugLog(...)
#elif DEBUG == 1
#define DebugLog(...) NSLog(__VA_ARGS__)
#endif
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define        SYSTEM_VERSION                                [[UIDevice currentDevice] systemVersion]
#define        SYSTEM_VERSION_EQUAL_TO(v)                    ([SYSTEM_VERSION compare:v options:NSNumericSearch] == NSOrderedSame)
#define        SYSTEM_VERSION_GREATER_THAN(v)                ([SYSTEM_VERSION compare:v options:NSNumericSearch] == NSOrderedDescending)
#define        SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)    ([SYSTEM_VERSION compare:v options:NSNumericSearch] != NSOrderedAscending)
#define        SYSTEM_VERSION_LESS_THAN(v)                    ([SYSTEM_VERSION compare:v options:NSNumericSearch] == NSOrderedAscending)
#define        SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)        ([SYSTEM_VERSION compare:v options:NSNumericSearch] != NSOrderedDescending)
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define IS_IPAD   ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IS_IPHONE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define FONT_SIZE               14.0f
#define CELL_CONTENT_WIDTH      320.0f
#define CELL_CONTENT_MARGIN     10.0f
#define HEIGHTOFPOPUPTRIANGLE   6.0f
#define WIDTHOFPOPUPTRIANGLE    6.0f
#define paddingX                8.0f
#define paddingY                8.0f

#define CELL_ANIMATION_HEIGHT   10.0f
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#define FONT_SIZE 14.0f

#define publicMovie     "public.movie"
#define publicImage     "public.image"
#define publicContent   "public.content"

#pragma mark -

#import <UIKit/UIKit.h>
#import <AVKit/AVKit.h>
#import <Contacts/Contacts.h>
#import <CoreSpotlight/CoreSpotlight.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <MessageUI/MFMessageComposeViewController.h>
#import <MobileCoreServices/MobileCoreServices.h>

#pragma mark -

#import "Camera.h"

typedef enum
{
    MessageBubbleViewButtonTailDirectionRight = 0,
    MessageBubbleViewButtonTailDirectionLeft = 1
} MessageBubbleViewButtonTailDirection;
