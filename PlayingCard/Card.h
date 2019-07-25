//
//  Card.h
//  PlayingCard
//
//  Created by dianyi on 2019/7/23.
//  Copyright © 2019 dianyi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Card : NSObject

@property (strong, nonatomic) NSString* contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end

NS_ASSUME_NONNULL_END
