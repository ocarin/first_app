//
//  ThreadsAppDelegate.h
//  Threads
//
//  Created by sasha levshin on 21.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ThreadsViewController;

@interface ThreadsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ThreadsViewController *viewController;

@end
