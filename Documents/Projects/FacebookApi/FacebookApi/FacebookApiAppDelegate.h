//
//  FacebookApiAppDelegate.h
//  FacebookApi
//
//  Created by sasha levshin on 25.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FacebookApiViewController;

@interface FacebookApiAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet FacebookApiViewController *viewController;

@end
