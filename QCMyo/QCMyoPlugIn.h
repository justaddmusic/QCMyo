#import <Quartz/Quartz.h>


@interface QCMyoPlugIn : QCPlugIn

@property (assign) NSUInteger inputPairingMode;
@property (strong) NSString *inputPairingMacAddress;

@property (strong) NSString *inputTrainingFilename;
@property (assign) NSUInteger inputVibration;

@property (assign) BOOL outputPaired;
@property (assign) BOOL outputConnected;
@property (assign) BOOL outputTrained;

@property (strong) NSString *outputMacAddress;

@property (assign) double outputOrientationX;
@property (assign) double outputOrientationY;
@property (assign) double outputOrientationZ;
@property (assign) double outputOrientationW;

@property (assign) double outputAccelerometerX;
@property (assign) double outputAccelerometerY;
@property (assign) double outputAccelerometerZ;

@property (assign) double outputGyroscopeX;
@property (assign) double outputGyroscopeY;
@property (assign) double outputGyroscopeZ;

@property (assign) NSUInteger outputPose;

@end