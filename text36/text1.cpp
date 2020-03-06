
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;
//为了下面的程序能跑我就把这里的程序弄成备注了，去掉/**/的备注符号就可以跑
/*int main()
{
	cv::Mat src_color = imread("E:\\Git\\solar_cell_01.png");
	std::vector<cv::Mat> channals;
	cv::split(src_color, channals);
	cv::Mat B = channals.at(0);
	cv::Mat G = channals.at(1);
	cv::Mat R = channals.at(2);
	cv::imshow("red", R);
	cv::imshow("blue", B);
	cv::imshow("green", G);
	cv::imshow("original Mat", src_color);
	waitKey(0);
}*/