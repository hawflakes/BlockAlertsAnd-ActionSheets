//
//  BlockAlertDataStructure.h
//  BlockAlertsDemo
//
//  Created by David Davtian on 7/8/12.
//  Copyright (c) 2012 CodeCrop Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlockAlertDataStructure : NSObject {
    NSMutableArray *alertViews;
}

+(id)sharedBlockAlertDataStructure;

@property (nonatomic, retain)  NSMutableArray *alertViews;

@end
