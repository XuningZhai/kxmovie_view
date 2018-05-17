//
//  DisplayView.h
//  FocusVision
//
//  Created by aipu on 16/4/22.
//  Copyright © 2016年 aipu. All rights reserved.
//

#import <UIKit/UIKit.h>

//@class KxMovieDecoder;

//extern NSString * const KxMovieParameterMinBufferedDuration;    // Float
//extern NSString * const KxMovieParameterMaxBufferedDuration;    // Float
//extern NSString * const KxMovieParameterDisableDeinterlacing;   // BOOL

@interface DisplayView : UIView

@property (readwrite) BOOL playing;//是否处于播放状态
@property (readwrite) BOOL audioPlaying;//音频是否处于播放状态
@property (nonatomic,assign) BOOL isLoading;//视频是否处于加载状态
@property (nonatomic,assign) BOOL isActiviting;//视频是否处于缓冲状态

@property (nonatomic,strong) UIActivityIndicatorView *activityIndicatorView;//活动视图
@property (nonatomic,assign) BOOL isClipImage;//是否抓图

//自定义uiview播放
+ (id) displayViewrWithContentPath: (NSString *) path//url
                        parameters: (NSDictionary *) parameters//参数
                             frame:(CGRect)frame;//frame

//停止播放
- (void)stop;

//音频播放
- (void)audioStart;
//音频停止
- (void)audioStop;


//开始录像
- (void)recordAction;
//结束录像
- (void)recordfinish;

- (void)play;
//暂停播放
- (void)pause;
//继续播放
- (void)restorePlay;


//seek
//- (void)setMoviePosition: (CGFloat) position;






@end
