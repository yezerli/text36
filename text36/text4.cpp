
#include <iostream>
#include <opencv.hpp>
#include <stdio.h>

using namespace cv;

int main()
{
	cv::Mat src_color = imread("E:\\Git\\solar_cell_01.png");
	float histgram[256];
	int height = src_color.rows;//��ʾ����
	int width = src_color.cols;//��ʾÿ��Ԫ�ص���Ԫ������
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			histgram[i + j] = src_color.at<Vec3b>[j, i];
		}
	}
}