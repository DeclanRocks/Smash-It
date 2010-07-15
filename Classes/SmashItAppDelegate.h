//
//  SmashItAppDelegate.h
//  SmashIt
//
//  Created by Declan Williamson on 7/14/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SmashItViewController;

@interface SmashItAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SmashItViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SmashItViewController *viewController;

@end

