//
//  DraftController.h
//  Bitmarket
//
//  Created by Steve Dekorte on 2/9/14.
//  Copyright (c) 2014 Bitmarkets.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ColoredView.h"

@interface DraftController : NSViewController <NSWindowDelegate>

@property (assign, nonatomic) IBOutlet NSButton *sendButton;

@property (assign, nonatomic) IBOutlet NSTextField *from;
@property (assign, nonatomic) IBOutlet NSTextField *to;
@property (assign, nonatomic) IBOutlet NSTextField *subject;

@property (assign, nonatomic) IBOutlet NSScrollView *scrollView;
@property (assign, nonatomic) IBOutlet NSTextView *bodyText;
@property (strong, nonatomic) ColoredView *marginView;


@property (assign, nonatomic) IBOutlet ColoredView *bodyArea;
@property (assign, nonatomic) IBOutlet ColoredView *topBackground;

- (IBAction)send:(id)sender;
- (void)setCursorForReply;

- (void)updateSendButton;

@end