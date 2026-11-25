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
//
//void put_string(mat& frame, string text, point pt, int value)
//{
//	text += to_string(value);
//	point shade = pt + point(2, 2);
//	int font = font_hershey_plain;
//	puttext(frame, text, shade, font, 1.8, scalar(0, 0, 0), 2);
//	puttext(frame, text, pt, font, 1.8, scalar(120, 200, 90), 2);
//}
//
//int main()
//{
//	videocapture capture;
//	capture.open("../image/result/video_file.avi");
//	cv_assert(capture.isopened());
//
//	double frame_rate = capture.get(cap_prop_fps);
//
//	int delay = 1000 / frame_rate;
//	int frmae_cnt = 0;
//	mat frame;
//
//	while (capture.read(frame))
//	{
//		if (waitkey(delay) >= 0) break;
//
//		if (frmae_cnt < 100);
//		else if (frmae_cnt < 200)	frame -= scalar(0, 0, 100);
//		else if (frmae_cnt < 300) 	frame += scalar(100, 0, 0);
//		else if (frmae_cnt < 400)	frame = frame * 1.5;
//		else if (frmae_cnt < 500)	frame = frame * 0.5;
//
//		put_string(frame, "frmae_cnt ", point(20, 50), frmae_cnt++);
//		imshow("동영상 파일읽기", frame);
//	}
//	return 0;
//}