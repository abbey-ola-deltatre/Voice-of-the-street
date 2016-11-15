//
//  MusicViewController.h
//  Enesco
//
//  Created by Aufree on 11/30/15.
//  Copyright © 2015 The EST Group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DOUAudioStreamer.h"
#import "GVUserDefaults+Properties.h"
#import "MusicEntity.h"

@protocol MusicViewControllerDelegate <NSObject>
@optional
- (void)updatePlaybackIndicatorOfVisisbleCells;
@end

@interface MusicViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *iphonedismissbutton;
@property (weak, nonatomic) IBOutlet UIButton *seconddismissButton;
@property (weak, nonatomic) IBOutlet UISlider *volumeControl;
@property (nonatomic, strong) NSMutableArray *musicEntities;
@property (nonatomic, strong) NSMutableArray *deletethis;
@property (nonatomic, strong) NSArray *searchResult;
@property (nonatomic, copy) NSString *musicTitle;
@property (nonatomic, strong) DOUAudioStreamer *streamer;
@property (nonatomic, assign) BOOL dontReloadMusic;
@property (nonatomic, assign) NSInteger specialIndex;
@property (nonatomic, copy) NSNumber *parentId;
@property (nonatomic, weak) id<MusicViewControllerDelegate> delegate;
@property (nonatomic, assign) BOOL isNotPresenting;
@property (nonatomic, assign) MusicCycleType musicCycleType;
@property (nonatomic, strong) NSMutableArray *musicEntitiesSelection;
@property (nonatomic, strong) NSMutableArray *downloadqueue;
+ (instancetype)sharedInstance;
- (IBAction)playPreviousMusic:(id)sender;
- (IBAction)playNextMusic:(id)sender;
- (MusicEntity *)currentPlayingMusic;
@end
