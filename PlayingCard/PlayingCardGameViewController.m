//
//  PlayingCardGameViewController.m
//  PlayingCard
//
//  Created by dianyi on 2019/8/2.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import "PlayingCardGameViewController.h"
#import "Model/PlayingCardDeck.h"

@interface PlayingCardGameViewController ()

@end

@implementation PlayingCardGameViewController

- (Deck *)createDeck
{
    return [[PlayingCardDeck alloc] init];
}

@end
