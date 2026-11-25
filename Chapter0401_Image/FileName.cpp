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
//int main()
//{
//    int Threshold_val=100;
//    string filename = "../image/read_color.jpg";
//    Mat img = imread(filename, IMREAD_COLOR);
//
//    imshow("Input_Image", img);
//
//    uchar* img_data = img.data;
//    for (int row = 0; row < img.rows; row++)
//    {
//        for (int col = 0; col < img.cols; col++)
//        {
//            if(img_data[row * img.cols * 3 + col * 3] - Threshold_val > 0)
//                img_data[row * img.cols * 3 + col * 3] -= Threshold_val;
//            else
//                img_data[row * img.cols * 3 + col * 3] = 0;
//            if (img_data[row * img.cols * 3 + col * 3 + 1] - Threshold_val > 0)
//                img_data[row * img.cols * 3 + col * 3 + 1] -= Threshold_val;
//            else
//                img_data[row * img.cols * 3 + col * 3 + 1] = 0;
//            if (img_data[row * img.cols * 3 + col * 3 + 2] - Threshold_val > 0)
//                img_data[row * img.cols * 3 + col * 3 + 2] -= Threshold_val;
//            else
//                img_data[row * img.cols * 3 + col * 3 + 2] = 0;
//        }
//    }
//    
//    imshow("Result_Image", img);
//
//    waitKey(0);
//	return 0;
//}