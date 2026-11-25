/*****************************************************************
*
*	Dongseo Univ. Computer_Engineering
*	Prof. Nam-Woo Kim (nwkim@dongseo.ac.kr)
*	+82-10-8517-6699
*	05. APR. 2024
*
* ****************************************************************/

#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void main()
{
	Mat  image(300, 500, CV_8UC1, Scalar(255));
	Point2f  center(250, 150), pts[4];
	Size2f  size(300, 100);
	RotatedRect  rot_rect(center, size, 20);

	Rect bound_rect = rot_rect.boundingRect();
	rectangle(image, bound_rect, Scalar(0), 1);
	circle(image, rot_rect.center, 1, Scalar(0), 2);

	rot_rect.points(pts);
	for (int i = 0; i < 4; i++)
	{
		circle(image, pts[i], 4, Scalar(0), 1);
		line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2);
	}

	imshow("회전사각형", image);
	waitKey(0);
}