
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;
using namespace std;
int main()
{
	cv::Mat dispMat = imread("E:\\Git\\solar_cell_01.png");
	cv::Point pt;
	cv::Point pt1;
	cv::Point pt2;
	cv::Rect rect;
	pt.x = 200;
	pt.y = 200;
	pt1.x = 10;
	pt1.y = 10;
	pt2.x = 100;
	pt2.y = 10;
	rect.x = 300;
	rect.y = 300;	
	rect.width=100;
	rect.height=100;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 2, 8, 0);
	circle(dispMat, pt, 5, CV_RGB(255, 0, 0), 1, 8, 0);
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 2, 8, 0);
	cv::imshow("Mat", dispMat);
	waitKey(0);
	return 0;
}
