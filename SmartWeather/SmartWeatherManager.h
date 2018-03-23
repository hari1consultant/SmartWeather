//
//  SmartWeatherManager.h
//  SmartWeather
//
//  Created by Hari on 20/03/2017.
//  Copyright © 2017 Hari. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import "SmartWeatherCondition.h"

@interface SmartWeatherManager : NSObject
<CLLocationManagerDelegate>

+ (instancetype)sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) SmartWeatherCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void)setCityLocation:(NSString *)cityLocation;

@end
