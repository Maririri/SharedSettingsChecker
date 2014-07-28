//
//  AppDelegate.m
//  CocoApp6-4
//
//  Created by Maria Baburina on 24/07/14.
//  Copyright (c) 2014 jetbrains. All rights reserved.
//


#import "AppDelegate.h"


@interface AppDelegate ()

@property (weak) IBOutlet NSWindow *window;

@end

@implementation AppDelegate
            

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
    // Insert code here to initialize your application




        NSDictionary *textAnalysisProperties = [NSDictionary dictionaryWithObjectsAndKeys:
                                                         [NSNumber numberWithInteger:0], kSKMaximumTerms,
                                                         [NSNumber numberWithInteger:2], kSKMinTermLength];



}

- (void)applicationWillTerminate:(NSNotification *)aNotification {
    // Insert code here to tear down your application

}


@end