//
//  ViewController.m
//  CardGame
//
//  Created by Ivy Huang on 9/21/14.
//  Copyright (c) 2014 Ivy Huang. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()


@property (weak, nonatomic) IBOutlet UILabel *McLabel;
@property (nonatomic) BOOL buttonWasPressed;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonPressed:(UIButton *)sender
{
    if (!self.buttonWasPressed) {
        self.McLabel.text = @"You pressed me! ;)";
        self.buttonWasPressed = !self.buttonWasPressed;
    }
    else if (self.buttonWasPressed){
        self.McLabel.text = @"";
        self.buttonWasPressed = !self.buttonWasPressed;
    }
    
    [self tellMeSomething];
    
}

-(void)tellMeSomething
{
    NSLog(@"You called the tellMeSomething function");
}


@end
