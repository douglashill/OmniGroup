// Copyright 2010-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UITextView.h>

@interface OUIEditableDataDetectingTextView : UITextView

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic) BOOL drawsPlaceholder;
@property (nonatomic) BOOL drawsBorder;

@end