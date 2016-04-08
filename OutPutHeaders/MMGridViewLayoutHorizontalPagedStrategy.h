/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMGridViewLayoutHorizontalStrategy.h"


@interface MMGridViewLayoutHorizontalPagedStrategy : MMGridViewLayoutHorizontalStrategy {
	int _numberOfItemsPerRow;
	int _numberOfItemsPerPage;
	int _numberOfPages;
}
@property(readonly, assign, nonatomic) int numberOfPages;
@property(readonly, assign, nonatomic) int numberOfItemsPerPage;
@property(readonly, assign, nonatomic) int numberOfItemsPerRow;
+(BOOL)requiresEnablingPaging;
-(NSRange)rangeOfPositionsInBoundsFromOffset:(CGPoint)offset;
-(int)itemPositionFromLocation:(CGPoint)location;
-(CGPoint)originForItemAtPosition:(int)position;
-(int)rowForItemAtPosition:(int)position;
-(int)columnForItemAtPosition:(int)position;
-(int)positionForItemAtColumn:(int)column row:(int)row page:(int)page;
-(CGPoint)originForItemAtColumn:(int)column row:(int)row page:(int)page;
-(int)pageForItemAtIndex:(int)index;
-(void)rebaseWithItemCount:(int)itemCount insideOfBounds:(CGRect)bounds;
@end
