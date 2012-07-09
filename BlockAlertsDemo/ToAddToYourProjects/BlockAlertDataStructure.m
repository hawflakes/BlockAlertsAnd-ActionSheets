//
//  BlockAlertDataStructure.m
//  BlockAlertsDemo
//
//  Created by David Davtian on 7/8/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

#import "BlockAlertDataStructure.h"

@implementation BlockAlertDataStructure

@synthesize alertViews;

static BlockAlertDataStructure *sharedController = nil;

#pragma mark BlockAlertDataStructure Singelton

+(id)sharedBlockAlertDataStructure {
    @synchronized(self) {
        if (sharedController == nil)
            sharedController = [[self alloc] initDataStructure];
    }
    return sharedController;
}

-(id)initDataStructure {
    self = [super init];
    alertViews = [[NSMutableArray alloc] init];
    return self;
}

@end
