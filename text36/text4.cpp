
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;

int main()
{
	cv::Mat src_color = imread("E:\\Git\\solar_cell_01.png",0);
	float histgram[256] = {0};
	int height = src_color.rows;//��ʾ����
	int width = src_color.cols;//��ʾÿ��Ԫ�ص���Ԫ������
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