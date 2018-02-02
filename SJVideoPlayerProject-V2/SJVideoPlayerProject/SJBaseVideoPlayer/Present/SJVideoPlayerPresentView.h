//
//  SJVideoPlayerPresentView.h
//  SJVideoPlayerProject
//
//  Created by BlueDancer on 2017/11/29.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "SJVideoPlayerState.h"

NS_ASSUME_NONNULL_BEGIN

@class SJVideoPlayerAssetCarrier;

@interface SJVideoPlayerPresentView : UIView

@property (nonatomic, weak, nullable) SJVideoPlayerAssetCarrier *asset;

@property (nonatomic, copy, nullable) void(^readyForDisplay)(SJVideoPlayerPresentView *view, CGRect videoRect);

@property (nonatomic, strong, nullable) UIImage *placeholder;

@property (nonatomic, copy) AVLayerVideoGravity videoGravity; // default is AVLayerVideoGravityResizeAspect.

@property (nonatomic) SJVideoPlayerPlayState state;

@end

NS_ASSUME_NONNULL_END
