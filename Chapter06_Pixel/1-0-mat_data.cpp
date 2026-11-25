/*****************************************************************
*
*	Dongseo Univ. Computer_Engineering
*	Prof. Nam-Woo Kim (nwkim@dongseo.ac.kr)
*	+82-10-8517-6699
*	05. APR. 2024
*
* ****************************************************************/

/* 참조
 uchar* img_data = img.data;
 for (int row = 0; row < img.rows; row++)
 {
    for (int col = 0; col < img.cols; col++)
    {
        uchar b = img_data[row * img.cols * 3 + col * 3];
        uchar g = img_data[row * img.cols * 3 + col * 3 + 1];
        uchar r = img_data[row * img.cols * 3 + col * 3 + 2];
        printf("\t (%d, %d, %d)", r, g, b);
    }
    cout << "\n" << endl;
}
*/

//#include <opencv2/opencv.hpp> 
//using namespace cv;
//using namespace std;
//
//int main(int ac, char** av)
//{
//    Mat img = imread("../image/flip_test.jpg", IMREAD_COLOR);
//    
//    printf(" \t(R, G, B) data : Mat::at \n");
//    for (int row = 0; row < img.rows; row++)
//    {
//        for (int col = 0; col < img.cols; col++)
//        {
//            uchar b = img.at<Vec3b>(row, col)[0];
//            uchar g = img.at<Vec3b>(row, col)[1];
//            uchar r = img.at<Vec3b>(row, col)[2];
//            cout << "\t" << r << "," << g << "," << b;
//        }
//        cout << "\n" << endl;
//    }
//    printf("\n\n\n");
//    printf(" \t(R, G, B) data : Mat::ptr \n");
//    for (int row = 0; row < img.rows; row++)
//    {
//        uchar* pointer_row = img.ptr<uchar>(row);
//        for (int col = 0; col < img.cols; col++)
//        {
//            uchar b = pointer_row[col * 3 + 0];
//            uchar g = pointer_row[col * 3 + 1];
//            uchar r = pointer_row[col * 3 + 2];
//            cout << "\t" << r << "," << g << "," << b;
//        }
//        cout << "\n" << endl;
//    }
//    printf("\n\n\n");
//    printf(" \t(R, G, B) data : Mat::data \n");
//    uchar* img_data = img.data;
//
//    for (int row = 0; row < img.rows; row++)
//    {
//        for (int col = 0; col < img.cols; col++)
//        {
//            uchar b = img_data[row * img.cols * 3 + col * 3];
//            uchar g = img_data[row * img.cols * 3 + col * 3 + 1];
//            uchar r = img_data[row * img.cols * 3 + col * 3 + 2];
//            cout << "\t" << r << "," << g << "," << b;
//        }
//        cout << "\n" << endl;
//    }
//    return 0;
//}