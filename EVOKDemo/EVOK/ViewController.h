//
//  ViewController.h
//  调起app
//
//  Created by MrChen on 16/8/7.
//  Copyright © 2016年 MrChen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIWebViewDelegate>
 
@property (weak, nonatomic) IBOutlet UIWebView *myWebView;

@end

