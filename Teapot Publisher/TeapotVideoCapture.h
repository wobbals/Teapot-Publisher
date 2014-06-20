//
//  MovVideoCapture.h
//  KeyboardCatPublisher
//
//  Created by Charley Robinson on 6/10/14.
//

#import <Foundation/Foundation.h>
#import <OpenTok/OpenTok.h>
#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

@interface TeapotVideoCapture : UIView <OTVideoCapture>


@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) NSInteger animationFrameInterval;

@property (nonatomic) UIAccelerationValue *accel;

-(void)startAnimation;
-(void)stopAnimation;
-(void)drawView;

@end
