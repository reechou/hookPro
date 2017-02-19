//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDCellLayout.h"

@class MDEmotion, MDFeed, MDFeedGridNode, MDFeedItem, MDFeedSourceNode, MDImageNode, MDImageTextNode, MDTextNode, MDUserMarkIconsNode, MDViewNode;

@interface MDFeedLayout : MDCellLayout
{
    _Bool _readTouchEnable;
    _Bool _isDetails;
    MDViewNode *_nodeImageBack;
    MDViewNode *_nodeFeedNotepaper;
    MDViewNode *_nodeTopContent;
    MDTextNode *_nodeUserName;
    MDUserMarkIconsNode *_nodeUserMarkIcons;
    MDImageTextNode *_nodePrivacy;
    MDTextNode *_nodeCreateTime;
    MDImageNode *_nodeTopicIcon;
    MDImageNode *_nodeActionButton;
    MDViewNode *_nodeHeadImage;
    MDTextNode *_nodeFeedContent;
    MDFeedGridNode *_nodeGrid;
    MDViewNode *_nodeImageCountTip;
    MDImageNode *_nodeEmotion;
    MDViewNode *_nodeVideoInfo;
    MDViewNode *_nodeLiveStatusInfo;
    MDFeedSourceNode *_nodeFeedSource;
    MDViewNode *_nodeMusic;
    MDViewNode *_nodeSiteInfo;
    MDViewNode *_nodeBottomContent;
    MDImageNode *_nodeComment;
    MDViewNode *_nodeLike;
    MDViewNode *_nodeBottomDesc;
    MDTextNode *_nodeDistance;
    MDViewNode *_nodeLikeCount;
    MDTextNode *_nodeCommentCount;
    MDTextNode *_nodeRead;
    MDTextNode *_nodeSource;
    MDViewNode *_nodeSeparator;
    MDFeedItem *_feedItem;
    MDEmotion *_aEmotion;
    double _cellHeight;
    MDFeed *_aFeed;
    double _maxDistanceWidth;
}

@property(nonatomic) double maxDistanceWidth; // @synthesize maxDistanceWidth=_maxDistanceWidth;
@property(nonatomic) _Bool isDetails; // @synthesize isDetails=_isDetails;
@property(retain, nonatomic) MDFeed *aFeed; // @synthesize aFeed=_aFeed;
@property(nonatomic) _Bool readTouchEnable; // @synthesize readTouchEnable=_readTouchEnable;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) MDEmotion *aEmotion; // @synthesize aEmotion=_aEmotion;
@property(nonatomic) __weak MDFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) MDViewNode *nodeSeparator; // @synthesize nodeSeparator=_nodeSeparator;
@property(retain, nonatomic) MDTextNode *nodeSource; // @synthesize nodeSource=_nodeSource;
@property(retain, nonatomic) MDTextNode *nodeRead; // @synthesize nodeRead=_nodeRead;
@property(retain, nonatomic) MDTextNode *nodeCommentCount; // @synthesize nodeCommentCount=_nodeCommentCount;
@property(retain, nonatomic) MDViewNode *nodeLikeCount; // @synthesize nodeLikeCount=_nodeLikeCount;
@property(retain, nonatomic) MDTextNode *nodeDistance; // @synthesize nodeDistance=_nodeDistance;
@property(retain, nonatomic) MDViewNode *nodeBottomDesc; // @synthesize nodeBottomDesc=_nodeBottomDesc;
@property(retain, nonatomic) MDViewNode *nodeLike; // @synthesize nodeLike=_nodeLike;
@property(retain, nonatomic) MDImageNode *nodeComment; // @synthesize nodeComment=_nodeComment;
@property(retain, nonatomic) MDViewNode *nodeBottomContent; // @synthesize nodeBottomContent=_nodeBottomContent;
@property(retain, nonatomic) MDViewNode *nodeSiteInfo; // @synthesize nodeSiteInfo=_nodeSiteInfo;
@property(retain, nonatomic) MDViewNode *nodeMusic; // @synthesize nodeMusic=_nodeMusic;
@property(retain, nonatomic) MDFeedSourceNode *nodeFeedSource; // @synthesize nodeFeedSource=_nodeFeedSource;
@property(retain, nonatomic) MDViewNode *nodeLiveStatusInfo; // @synthesize nodeLiveStatusInfo=_nodeLiveStatusInfo;
@property(retain, nonatomic) MDViewNode *nodeVideoInfo; // @synthesize nodeVideoInfo=_nodeVideoInfo;
@property(retain, nonatomic) MDImageNode *nodeEmotion; // @synthesize nodeEmotion=_nodeEmotion;
@property(retain, nonatomic) MDViewNode *nodeImageCountTip; // @synthesize nodeImageCountTip=_nodeImageCountTip;
@property(retain, nonatomic) MDFeedGridNode *nodeGrid; // @synthesize nodeGrid=_nodeGrid;
@property(retain, nonatomic) MDTextNode *nodeFeedContent; // @synthesize nodeFeedContent=_nodeFeedContent;
@property(retain, nonatomic) MDViewNode *nodeHeadImage; // @synthesize nodeHeadImage=_nodeHeadImage;
@property(retain, nonatomic) MDImageNode *nodeActionButton; // @synthesize nodeActionButton=_nodeActionButton;
@property(retain, nonatomic) MDImageNode *nodeTopicIcon; // @synthesize nodeTopicIcon=_nodeTopicIcon;
@property(retain, nonatomic) MDTextNode *nodeCreateTime; // @synthesize nodeCreateTime=_nodeCreateTime;
@property(retain, nonatomic) MDImageTextNode *nodePrivacy; // @synthesize nodePrivacy=_nodePrivacy;
@property(retain, nonatomic) MDUserMarkIconsNode *nodeUserMarkIcons; // @synthesize nodeUserMarkIcons=_nodeUserMarkIcons;
@property(retain, nonatomic) MDTextNode *nodeUserName; // @synthesize nodeUserName=_nodeUserName;
@property(retain, nonatomic) MDViewNode *nodeTopContent; // @synthesize nodeTopContent=_nodeTopContent;
@property(retain, nonatomic) MDViewNode *nodeFeedNotepaper; // @synthesize nodeFeedNotepaper=_nodeFeedNotepaper;
@property(retain, nonatomic) MDViewNode *nodeImageBack; // @synthesize nodeImageBack=_nodeImageBack;
- (void).cxx_destruct;
- (double)heightForAllContent;
- (double)heightForImageBack;
- (void)layoutBottomDesc:(double)arg1;
- (void)layoutBottom;
- (void)layoutFeedSiteInfo;
- (void)layoutMusic;
- (void)layoutFeedResource;
- (void)layoutVideo;
- (void)layoutSmallEmotion;
- (void)layoutBigEmotion;
- (void)layoutEmotion;
- (void)layoutImageCountTip;
- (void)layoutImageGrid;
- (void)layoutFeedLive;
- (void)layoutFeedContent;
- (void)layoutPaperAndBasicInfoContainer;
- (void)layout;
- (id)imageTextNodeWithFrame:(struct CGRect)arg1 imageName:(id)arg2;
- (void)setupLikeCount;
- (void)setupAsyncComposedNodeBottomContent;
- (void)setupLike;
- (void)setupBottom;
- (void)setupSite;
- (void)setupMusic;
- (void)setupFeedSource;
- (void)setupVideo;
- (void)setupEmotion;
- (void)setupGird;
- (void)setupFeedLiveContent;
- (void)setupFeedContentText;
- (void)setupContent;
- (void)setupAsyncComposedNodeTopContent;
- (void)setupTopContent;
- (void)setupBackground;
- (void)setupNodeView;
- (id)initWithFeedItem:(id)arg1 isDetails:(_Bool)arg2;

@end
