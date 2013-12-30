/*
 * This file is part of the Canvas package.
 * (c) Canvas <usecanvas@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

typedef NSString *CSAnimationType;

static CSAnimationType CSAnimationTypeBounceLeft   = @"bounceLeft";
static CSAnimationType CSAnimationTypeBounceRight  = @"bounceRight";
static CSAnimationType CSAnimationTypeBounceDown   = @"bounceDown";
static CSAnimationType CSAnimationTypeBounceUp     = @"bounceUp";
static CSAnimationType CSAnimationTypeFadeIn       = @"fadeIn";
static CSAnimationType CSAnimationTypeFadeOut      = @"fadeOut";
static CSAnimationType CSAnimationTypeFadeInLeft   = @"fadeInLeft";
static CSAnimationType CSAnimationTypeFadeInRight  = @"fadeInRight";
static CSAnimationType CSAnimationTypeFadeInDown   = @"fadeInDown";
static CSAnimationType CSAnimationTypeFadeInUp     = @"fadeInUp";
static CSAnimationType CSAnimationTypeSlideLeft    = @"slideLeft";
static CSAnimationType CSAnimationTypeSlideRight   = @"slideRight";
static CSAnimationType CSAnimationTypeSlideDown    = @"slideDown";
static CSAnimationType CSAnimationTypeSlideUp      = @"slideUp";
static CSAnimationType CSAnimationTypePop          = @"pop";
static CSAnimationType CSAnimationTypeMorph        = @"morph";
static CSAnimationType CSAnimationTypeFlash        = @"flash";
static CSAnimationType CSAnimationTypeShake        = @"shake";
static CSAnimationType CSAnimationTypeZoomIn       = @"zoomIn";
static CSAnimationType CSAnimationTypeZoomOut      = @"zoomOut";
static CSAnimationType CSAnimationTypeDrop         = @"drop";

extern NSString *const CSAnimationExceptionMethodNotImplemented;

@protocol CSAnimation <NSObject>

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic) NSTimeInterval delay;
@property (nonatomic) NSTimeInterval damping;
@property (nonatomic) NSTimeInterval velocity;
@property (nonatomic) float distance;
@property (nonatomic, strong) UIDynamicAnimator *animator;

+ (void)performAnimationOnView:(UIView *)view duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay distance:(float)distance damping:(float)damping velocity:(float)velocity animator:(UIDynamicBehavior *)animator;

@end


@interface CSAnimation : NSObject <CSAnimation>

+ (void)registerClass:(Class)class forAnimationType:(CSAnimationType)animationType;
+ (Class)classForAnimationType:(CSAnimationType)animationType;

@end