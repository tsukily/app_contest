#include <opencv2/opencv.hpp>
#include <stdio.h>
#include<iostream>
#include "function.hpp"
using namespace cv;
using namespace std;


Mat size_a4() {
    Mat image;
    image = Mat(Size(2894, 4093), CV_8UC3, Scalar(255, 255, 255));
    return image;
}

Mat find_tenji(uint32_t a) {
    string path = "Japanese_syllabary\\";
    path += to_string(a);
    path += ".png";
    Mat	image = cv::imread(path);
    cout << path << endl;
    return image;
}

Mat find_tenji1(uint32_t a, uint32_t b) {
    string path = "Japanese_syllabary\\";
    path += to_string(a);
    path += to_string(b);
    path += ".png";
    Mat	image = cv::imread(path);
    cout << path << endl;
    return image;
}


int paste(cv::Mat dst, cv::Mat src, int x, int y) {
    int x_plus = 1;
    int w = (x >= 0) ? std::min(dst.cols - x, src.cols) : std::min(std::max(src.cols + x, 0), dst.cols);
    int h = (y >= 0) ? std::min(dst.rows - y, src.rows) : std::min(std::max(src.rows + y, 0), dst.rows);
    int u = (x >= 0) ? 0 : std::min(-x, src.cols - 1);
    int v = (y >= 0) ? 0 : std::min(-y, src.rows - 1);
    int px = std::max(x, 0);
    int py = std::max(y, 0);

    cv::Mat roi_dst = dst(cv::Rect(px, py, w, h));
    cv::Mat roi_resized = src(cv::Rect(u, v, w, h));
    roi_resized.copyTo(roi_dst);
    if (src.cols == 84) {
        cout << src.cols << " " << 1 << endl;
        x_plus = 1;
        return x_plus;
    }
    else {
        cout << src.cols << " " << 2 << endl;
        x_plus = 2;
        return x_plus;
    }

}


/*
while (it < end) {
    // イテレータを1文字分すすめる
    uint32_t code = utf8::next(it, end);
    // 該当位置の文字コードを出力
    if (count % 6 != 0)
    {
        if (count % 6 == 1)
            cout << "{";
        cout << "\"" << to_string(code) << "\",";
    }
    else
        cout << "\"" << to_string(code) << "\"}," << endl;
    count++;
}
 */