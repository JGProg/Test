//
//  TBFlipsideViewController.h
//  Test
//
//  Created by jessy giacomoni on 25/04/13.
//  Copyright (c) 2013 jessy giacomoni. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TBFlipsideViewController;

@protocol TBFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(TBFlipsideViewController *)controller;
@end

@interface TBFlipsideViewController : UIViewController

@property (weak, nonatomic) id <TBFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
