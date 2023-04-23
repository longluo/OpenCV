#include <iostream>
#include <opencv2\opencv.hpp>

int main() {
    std::cout << "OpenCV config sample." << std::endl;
    std::cout<< cv::getBuildInformation() <<std::endl;

	cv::Mat img = cv::imread("E:/Project/OpenCV/HelloOpenCV/lena.png");
	cv::imshow("Lena", img);
	cv::waitKey(0);

	return 0; 
}

