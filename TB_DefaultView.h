//
//  TB-DefaultView.h
//  Test
//
//  Created by jessy giacomoni on 25/04/13.
//  Copyright (c) 2013 jessy giacomoni. All rights reserved.
//

#import "TBFlipsideViewController.h"

@interface TB_DefaultView : UIViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak, nonatomic) IBOutlet UIButton *ButtonTest;

@end
