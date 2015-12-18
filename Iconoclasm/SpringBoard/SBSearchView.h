/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/Foundation.h>
#import "SpringBoard-Structs.h"

@class UISearchBar, UITableView, UILabel, SBRoundedCornerView, UIKeyboard;

@interface SBSearchView : UIView {
	SBRoundedCornerView *_roundedCornerView;
	UISearchBar *_searchBar;
	UITableView *_tableView;
	UIKeyboard *_keyboard;
	UILabel *_noResultsLabel;
	BOOL _isKeyboardVisible;
	BOOL _inAnimationBlock;
	BOOL _showSearchKeyWhenAnimatingKeyboard;
}
@property(readonly, assign, nonatomic) UISearchBar *searchBar;
@property(readonly, assign, nonatomic) UITableView *tableView;
@property(readonly, assign) BOOL isKeyboardVisible;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_initializeKeyboardIfNotBricked;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
-(void)layoutCornerView;
-(float)_footerHeight;
-(void)layoutFooterView;
-(void)setShowsKeyboard:(BOOL)keyboard animated:(BOOL)animated;
-(void)keyboardAnimationDidStop:(id)keyboardAnimation finished:(id)finished context:(void *)context;
-(void)_fixUpRespondersAndPreheat;
-(void)setShowingNoResultsText:(BOOL)text;
-(void)setShowsSearchKeyWhenAnimatingKeyboard:(BOOL)keyboard;
-(void)_setDistantContentViewTransform;
-(void)scatter:(BOOL)scatter startTime:(double)time;
-(void)scatterAnimationDidStop;
-(void)unscatter:(BOOL)unscatter startTime:(double)time;
-(void)unscatterAnimationDidStop;
@end
