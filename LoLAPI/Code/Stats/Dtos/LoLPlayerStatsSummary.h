//
//  LoLPlayerStatsSummary.h
//  LoLAPI
//
//  Created by Troy Stump on 4/27/14.
//  Copyright (c) 2014 Troy Stump. All rights reserved.
//

#import "LoLBaseDTO.h"
#import "LoLAggregatedStats.h"


@interface LoLPlayerStatsSummary : LoLBaseDTO

@property (nonatomic, strong) LoLAggregatedStats *aggregatedStats;
@property (nonatomic, strong) NSNumber *losses;
@property (nonatomic, strong) NSNumber *modifyDate;
@property (nonatomic, strong) NSString *playerStatSummaryType;
@property (nonatomic, strong) NSNumber *wins;

@end