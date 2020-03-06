
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;
int a()
{
	cv::Mat dispMat;
	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);
}
int b()
{
	cv::Mat dispMat;
	cv::Point pt1;
	cv::Point pt2;
	pt1.x = 10;
	pt1.y = 0;
	pt2.x = 20;
	pt2.y = 0;
	line(dispMat,pt1,pt2, CV_RGB(255, 0, 0), 1, 8, 0);
}
int c()
{
	cv::Mat dispMat;
	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;	
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
}
