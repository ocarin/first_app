//
//  ThreadSliderAppDelegate.h
//  ThreadSlider
//
//  Created by sasha levshin on 22.06.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ThreadSliderViewController;

@interface ThreadSliderAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ThreadSliderViewController *viewController;

@end
