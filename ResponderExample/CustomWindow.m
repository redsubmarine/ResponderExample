//
//  CustomWindow.m
//  ResponderExample
//
//  Created by 양 원석 on 2013. 7. 25..
//  Copyright (c) 2013년 양 원석. All rights reserved.
//

#import "CustomWindow.h"

@implementation CustomWindow

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}


- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{
    NSLog(@"%@ Touched, nextResponer is %@", [self class], [self.nextResponder class]);
}

@end
