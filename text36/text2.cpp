
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;
//为了下面的程序能跑我就把这里的程序弄成备注了，去掉/**/的备注符号就可以跑
/*
int main()
{
	VideoCapture cap;

	cap.open(0);

	if (!cap.isOpened())
	{
		std::cout << "不能打开视频文件" << std::endl;
		return-1;
	}
	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;
	while (1)
	{
		cv::Mat frame;
		bool rSucess = cap.read(frame);
		if (!rSucess)
		{
			std::cout << "不能";
			break;
		}
		else
		{
			cv::imshow("frame",frame);

		}
		waitKey(30);
	}
}*/