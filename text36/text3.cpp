
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
	cv::Point pt;
	pt1 = 10;
	pt2 = 10;
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
int main()
{
	cv::Mat dispMat(2, 2, CV_8UC3, Scalar(0, 0, 255));

}