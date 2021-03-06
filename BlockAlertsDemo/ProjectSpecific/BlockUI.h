//
//  BlockUI.h
//
//  Created by Gustavo Ambrozio on 14/2/12.
//

#ifndef BlockUI_h
#define BlockUI_h

// Action Sheet constants

#define kActionSheetBounce         10
#define kActionSheetBorder         10
#define kActionSheetButtonHeight   45
#define kActionSheetTopMargin      15

#define kActionSheetTitleFont           [UIFont systemFontOfSize:18]
#define kActionSheetTitleTextColor      [UIColor whiteColor]
#define kActionSheetTitleShadowColor    [UIColor blackColor]
#define kActionSheetTitleShadowOffset   CGSizeMake(0, -1)

#define kActionSheetButtonFont          [UIFont boldSystemFontOfSize:20]
#define kActionSheetButtonTextColor     [UIColor whiteColor]
#define kActionSheetButtonShadowColor   [UIColor blackColor]
#define kActionSheetButtonShadowOffset  CGSizeMake(0, -1)

#define kActionSheetBackground              @"action-sheet-panel.png"
#define kActionSheetBackgroundCapHeight     30


// Alert View constants

#define kAlertViewBounce         20
//#define kAlertViewBorder         10
#define kAlertViewBorder         12
#define kAlertViewBottomBorder   4

#define kAlertButtonHeight       44

#define kAlertViewTitleFont             [UIFont boldSystemFontOfSize:20]
//#define kAlertViewTitleTextColor        [UIColor colorWithWhite:244.0/255.0 alpha:1.0]
#define kAlertViewTitleTextColor        [UIColor blackColor]

#define kAlertViewTitleShadowColor      [UIColor grayColor]
//#define kAlertViewTitleShadowOffset     CGSizeMake(0, -1)
#define kAlertViewTitleShadowOffset     CGSizeMake(0,0)

#define kAlertViewMessageFont           [UIFont systemFontOfSize:18]
//#define kAlertViewMessageTextColor      [UIColor colorWithWhite:244.0/255.0 alpha:1.0]
#define kAlertViewMessageTextColor      [UIColor blackColor]
//#define kAlertViewMessageShadowColor    [UIColor blackColor]
#define kAlertViewMessageShadowColor    [UIColor grayColor]
//#define kAlertViewMessageShadowOffset   CGSizeMake(0, -1)
#define kAlertViewMessageShadowOffset   CGSizeMake(0, 0)

#define kAlertViewButtonFont            [UIFont boldSystemFontOfSize:18]
#define kAlertViewButtonTextColor       [UIColor whiteColor]
#define kAlertViewDarkButtonTextColor   [UIColor blackColor]

//#define kAlertViewButtonShadowColor     [UIColor blackColor]
#define kAlertViewButtonShadowColor     [UIColor grayColor]
//#define kAlertViewButtonShadowOffset    CGSizeMake(0, -1)
#define kAlertViewButtonShadowOffset    CGSizeMake(0, 0)

#define kAlertViewBackground              @"dialog_background_white"
//#define kAlertViewBackground            @"alert-window.png"
#define kAlertViewBackgroundCapHeight   38

#endif
