//
//  PlayingCard.h
//  Matchismo_IOS7
//
//  Created by Felipe Valduga on 11/5/13.
//  Copyright (c) 2013 CS193P. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+(NSArray *)validSuits;
+(NSUInteger)maxRank;

@end
