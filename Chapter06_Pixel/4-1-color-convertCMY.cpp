/*****************************************************************
*
*	Dongseo Univ. Computer_Engineering
*	Prof. Nam-Woo Kim (nwkim@dongseo.ac.kr)
*	+82-10-8517-6699
*	05. APR. 2024
*
* ****************************************************************/

//#include <opencv2/opencv.hpp>
//using namespace cv;
//using namespace std;
//int main()
//{
//	Mat BGR_img = imread("../image/color_model.jpg", IMREAD_COLOR);
//	CV_Assert(BGR_img.data);
//
//	Scalar  white(255, 255, 255);
//	Mat  CMY_img = white - BGR_img;
//	Mat  CMY_arr[3];
//	split(CMY_img, CMY_arr); //콤포넌트 별 분류
//
//	imshow("BGR_img", BGR_img);
//	imshow("CMY_img", CMY_img);
//	imshow("Yellow", CMY_arr[0]);
//	imshow("Magenta", CMY_arr[1]);
//	imshow("Cyan", CMY_arr[2]);
//	waitKey();
//	return 0;
//}