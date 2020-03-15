#include <iostream>
#include <opencv2/core/core.hpp>
//Defined the basic building blocks of the library
#include <opencv2/highgui/highgui.hpp>
//Contains the functions for input and output operations
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){
    Mat image1;
    Mat image2;

    VideoCapture cap1(1);
    VideoCapture cap2(2);
    if(!cap1.isOpened()){
        printf("Can't open camera 1\n");
        return -1;
    }
    if(!cap2.isOpened()){
        printf("Can't open camera 2\n");
        return -1;
    }
    // namedWindow("Image1", WINDOW_AUTOSIZE);
    while(1) {
        cap1.read(image1);
        cap2.read(image2);

        if(image1.empty()) {
            printf("no image in camera 1 is captured");
            break;
        }
        if(image2.empty()) {
            printf("no image in camera 2 is captured");
            break;
        }


        imshow("Image1", image1);
        imshow("Image2", image2);

        if(waitKey(3) ==27) {
            break;
        }
    }

    return 0;
}