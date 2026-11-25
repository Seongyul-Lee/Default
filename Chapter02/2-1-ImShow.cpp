/*****************************************************************
*
*	Dongseo Univ. Computer_Engineering
*	Prof. Nam-Woo Kim (nwkim@dongseo.ac.kr)
*	+82-10-8517-6699
*	05. APR. 2024
*
* ****************************************************************/

#include <opencv2/highgui.hpp>

void main()
{
	cv::Mat image(300, 400, CV_8UC1, cv::Scalar(200));

	cv::imshow("영상보기", image);
	cv::waitKey(0);
}