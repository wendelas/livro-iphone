//
//  SobreViewController.h
//  Carros Objective-C
//
//  Created by Antonio Lopes on 8/4/16.
//  Copyright © 2016 Antonio Lopes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SobreViewController : UIViewController<UIWebViewDelegate> {
    
}

@property (nonatomic, strong) IBOutlet UIWebView *webView;
@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *progress;

@end
