//
//  WeatherData.h
//  mid-unit-2-assessment
//
//  Created by Michael Kavouras on 10/4/15.
//  Copyright © 2015 Michael Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WeatherData : NSObject

@property (nonatomic) NSDictionary *name;
@property (nonatomic) NSString *imageURLString;

//-(UIImage *)image;

+ (NSArray *)allData;

@end
