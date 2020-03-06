
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;
int main()
{
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(dispMat,pt,5, CV_RGB(255,0,0),1,8,0);
}