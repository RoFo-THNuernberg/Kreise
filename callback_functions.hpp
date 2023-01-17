#ifndef CALLBACK_FUNCTIONS_HPP
#define CALLBACK_FUNCTIONS_HPP

#include <opencv4/opencv2/core.hpp>
//FOR MOUSE (DEV)
#include <opencv4/opencv2/highgui.hpp>

#include "control_window_params.hpp"

struct parameterDescription;

void callback_trackbar_thresholdMode(int mode, void* userData);
void callback_trackbar_BlurMode(int mode, void* userData);
void callback_trackbar_BlurSize(int blurKernelValue, void* userData);
void callback_trackbar_ThresholdCannyLow(int cannyLow, void* userData);
void callback_trackbar_ThresholdCannyHigh(int cannyHigh, void* userData);
void callback_trackbar_DisplayWindowSize(int WindowSize, void* userData);
void callback_trackbar_ThresholdLow(int cannyLow, void* userData);
void callback_trackbar_ThresholdHigh(int cannyLow, void* userData);
void callback_trackbar_squareDetection(int mode, void *userData);
void callback_trackbar_circleDetection(int mode, void *userData);
void callback_trackbar_displayMode(int mode, void *userData);
void callback_trackbar_adaptiveMode(int mode, void *userData);

#ifdef DEV_MODE
    void callback_trackbar_inverseAccumulator(int mode, void *userData);
    void callback_trackbar_minDistCircles(int mode, void *userData);
    void callback_trackbar_upperCannyCircle(int mode, void *userData);
    void callback_trackbar_thresholdCenterDetection(int mode, void *userData);


    void callback_mouse_doubleclicked(int event, int x, int y, int flags, void* userData);
#endif

#endif