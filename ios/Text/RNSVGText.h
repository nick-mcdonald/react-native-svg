/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>
#import "RNSVGGroup.h"
#import "RNSVGTextAnchor.h"

@interface RNSVGText : RNSVGGroup

@property (nonatomic, assign) RNSVGTextAnchor textAnchor;
@property (nonatomic, strong) NSArray<NSString *> *deltaX;
@property (nonatomic, strong) NSArray<NSString *> *deltaY;
@property (nonatomic, strong) NSArray<NSString *> *positionX;
@property (nonatomic, strong) NSArray<NSString *> *positionY;

- (void)releaseCachedPath;
- (CGPathRef)getGroupPath:(CGContextRef)context;

- (CTFontRef)getFontFromContext;
- (CGPoint)getGlyphPointFromContext:(CGPoint)offset glyphWidth:(CGFloat)glyphWidth;

@end
