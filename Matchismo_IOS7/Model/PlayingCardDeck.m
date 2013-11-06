//
//  PlayingCardDeck.m
//  Matchismo_IOS7
//
//  Created by Felipe Valduga on 11/5/13.
//  Copyright (c) 2013 CS193P. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"

@implementation PlayingCardDeck

- (instancetype)init
{
    self = [super init];
    
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                PlayingCard *card = [[PlayingCard alloc] init];
                card.rank = rank;
                card.suit = suit;
                
                [self addCard:card];
            }
        
    }
    }
    
    return self;
}

@end
