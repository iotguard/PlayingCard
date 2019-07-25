//
//  Deck.h
//  PlayingCard
//
//  Created by dianyi on 2019/7/23.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

-(Card *)drawRandomCard;
@end

NS_ASSUME_NONNULL_END
