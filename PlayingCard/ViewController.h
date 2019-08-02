//
//  ViewController.h
//  PlayingCard
//
//  Created by dianyi on 2019/7/23.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Model/Deck.h"

@interface ViewController : UIViewController

- (Deck *)createDeck; // abstract method

@end

