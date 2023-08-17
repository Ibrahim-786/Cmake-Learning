#include<iostream>
#include<opencv2/opencv.hpp>



using namespace cv;


int main()
{
	Mat image;
image= imread("embedded-sample.jpeg");

namedWindow("Display Image", WINDOW_AUTOSIZE);

imshow("Display Image", image);

waitKey(0);


return 0;

}

