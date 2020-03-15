#include <iostream>
#include <opencv2/core/core.hpp>
//Defined the basic building blocks of the library
#include <opencv2/highgui/highgui.hpp>
//Contains the functions for input and output operations

using namespace std;
using namespace cv;

int main()
{
  Mat image;
  image = imread("Lenna.png");
  namedWindow("Lenna", WINDOW_AUTOSIZE);
  if(!image.data) {
    cout << "Image is not loaded" << endl;
    return 0;
  }
  imshow("Lenna", image);
  waitKey(0);
  return 0;
}