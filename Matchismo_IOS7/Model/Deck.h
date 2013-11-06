//
//  Deck.h
//  Matchismo_IOS7
//
//  Created by Felipe Valduga on 11/5/13.
//  Copyright (c) 2013 CS193P. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
