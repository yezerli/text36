
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;

int main()
{
	cv::Mat src_color = imread("E:\\Git\\solar_cell_01.png",0);
	float histgram[256] = {0};
	int height = src_color.rows;//表示行数
	int width = src_color.cols;//表示每行元素的总元素数量
	for (int j = 0; j < height; j++) {
		uchar* data = src_color.ptr<uchar>(j);
		for (int i = 0; i < width; i++) {
			for (int a = 0; a < 255; a++) {
				if (data[i] == a)
					histgram[a] = histgram[a] + 1;
			}
		}
	}
}