/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMovieCompressorDelegate <NSObject>
@optional
-(void)mMovieCompressor:(id)compressor onMovieCompressFinished:(id)finished thumbImg:(id)img ret:(unsigned long)ret;
-(void)mMovieCompressor:(id)compressor onMovieCompressFailed:(unsigned long)failed;
@end

