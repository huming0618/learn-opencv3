#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>


using namespace cv;

int main(){
//
    Mat srcImage = imread("/Users/peter/Desktop/dbstar_images/timg.jpeg");
    imshow("Original Image", srcImage);

    Mat grayImage,edge;
    //转换为灰度图
    cvtColor(srcImage, grayImage, CV_BGR2GRAY);
    //降噪
    blur(grayImage, edge, Size(3,3));
    //运行Canny算子，3为threshold1，9为threshold2
    Canny(edge, edge, 3, 9);
    
    imshow("After canny", edge);
    waitKey(0);
    return 0;
}
