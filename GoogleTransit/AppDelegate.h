//
//  AppDelegate.h
//  GoogleTransit
//
//  Created by Simon Maddox on 20/09/2012.
//  Copyright (c) 2012 Simon Maddox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UIWebViewDelegate>
{
    UIWebView *webView;
}

@property (strong, nonatomic) UIWindow *window;

@end
