//
//  SmartWeatherDailyForecast.m
//  SmartWeather
//
//  Created by Hari on 20/03/2017.
//  Copyright © 2017 Hari. All rights reserved.
//

#import "SmartWeatherDailyForecast.h"

@implementation SmartWeatherDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    return paths;
}

@end
