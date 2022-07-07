//
//  creattenji.cpp
//  app
//
//  Created by Àî«h on 2022/06/27.
//
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include<iostream>
#include "creattenji.hpp"
using namespace cv;
using namespace std;


Mat make_tenji(int i, int j) {
    Mat image;
    int a = 16, b = 38;
    image = Mat(Size(84, 158), CV_8UC3, Scalar(255, 255, 255));
    //¤¢
    if (i == 0) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤¤
    if (i == 1) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
    }
    //¤¦
    if (i == 2) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤¨
    if (i == 3) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
    }
    //¤ª
    if (i == 4) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
    }


    //¤¢
    if (j == 0) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤«
    if (j == 1) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    //¤µ
    if (j == 2) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    //¤¿
    if (j == 3) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤Ê
    if (j == 4) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤Ï
    if (j == 5) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    //¤Þ
    if (j == 6) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    //¤é
    if (j == 7) {
        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }


    return image;
}


Mat make_tenji1(int i) {
    Mat image;
    int a = 16, b = 38;
    image = Mat(Size(84, 158), CV_8UC3, Scalar(255, 255, 255));
    //¤ä
    if (i == 0) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤æ
    if (i == 1) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
    }
    //¤è
    if (i == 2) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤ï
    if (i == 3) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤ò
    if (i == 4) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //¤ó
    if (i == 5) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    //¤Ã
    if (i == 6) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    //©`
    if (i == 7) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }

    return image;
}
Mat make_tenji2(int i, int j) {
    Mat image;
    int a = 16, b = 38;
    image = Mat(Size(84 * 2, 158), CV_8UC3, Scalar(255, 255, 255));
    if (j != 4) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    if (j == 4) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    if (j == 0) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (j == 1) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (j == 2) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    if (j == 3 || j == 4) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 1) {
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 2) {
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 3) {
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);

    }
    if (i == 4) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 255, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);

    }
    return image;
}

Mat make_tenji3(int i, int j) {
    Mat image;
    int a = 16, b = 38;
    image = Mat(Size(84 * 2, 158), CV_8UC3, Scalar(255, 255, 255));
    if (i <= 6) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }

    if (i > 6 && i <= 10) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 255, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 255, 0), -1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    }
    if (i == 11) {
        cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 255, 255), -1, 4);
        cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);

        cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
        cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 255, 255), -1, 4);
    }
    cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    if (j != 2) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (j == 1 || j == 2) {
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (j == 2) {
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 1 || i == 2 || i == 5 || i == 6 || i == 8 || i == 9) {
        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 2 || i == 3 || i == 4 || i == 5 || i == 9 || i == 10 || i == 11) {
        cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }
    if (i == 0 || i == 1 || i == 4 || i == 5 || i == 7 || i == 8 || i == 10 || i == 11) {
        cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(255, 0, 0), -1, 4);
    }

    return image;
}



Mat make_tenji4(int i) {
    Mat image;
    int a = 16, b = 38;
    image = Mat(Size(84 * 2, 158), CV_8UC3, Scalar(255, 255, 255));
    cv::circle(image, cv::Point(10 + a, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    cv::circle(image, cv::Point(10 + a, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    cv::circle(image, cv::Point(10 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    cv::circle(image, cv::Point(42 + a, 73 + b), 10, cv::Scalar(0, 0, 0), -1, 4);

    cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(10 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    cv::circle(image, cv::Point(42 + a + 84, 73 + b), 10, cv::Scalar(0, 0, 0), 1, 4);
    if (i <= 7) {
        cv::circle(image, cv::Point(10 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    if (i == 2 || i == 3 || i == 5 || i == 6 || i == 8 || i == 9) {
        cv::circle(image, cv::Point(42 + a + 84, 10 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    if (i == 1 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9) {
        cv::circle(image, cv::Point(10 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }
    if (i == 3 || i == 4 || i == 6 || i == 7 || i == 9) {
        cv::circle(image, cv::Point(42 + a + 84, 42 + b), 10, cv::Scalar(0, 0, 0), -1, 4);
    }

    return image;
}

void JapaneseSyllabary() {
    Mat tenji;
    /*
    vector<vector<string>> aiueo = {
        {"¤¢","¤«","¤µ","¤¿","¤Ê","¤Ï","¤Þ","¤é"} ,
        {"¤¤","¤­","¤·","¤Á","¤Ë","¤Ò","¤ß","¤ê"} ,
        {"¤¦","¤¯","¤¹","¤Ä","¤Ì","¤Õ","¤à","¤ë"} ,
        {"¤¨","¤±","¤»","¤Æ","¤Í","¤Ø","¤á","¤ì"} ,
        {"¤ª","¤³","¤½","¤È","¤Î","¤Û","¤â","¤í"},
    };
    */

    vector<vector<string>> aiueo = {
        {"12354","12363","12373","12383","12394","12399","12414","12425"},
        {"12356","12365","12375","12385","12395","12402","12415","12426"},
        {"12358","12367","12377","12388","12396","12405","12416","12427"},
        {"12360","12369","12379","12390","12397","12408","12417","12428"},
        {"12362","12371","12381","12392","12398","12411","12418","12429"}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            tenji = make_tenji(i, j);
            imwrite("Japanese_syllabary\\" + aiueo[i][j] + ".png", tenji);
        }
    }

    /*
    vector<string> special1_tenji = {"¤ä","¤æ","¤è","¤ï","¤ò","¤ó","¤Ã","©`"};
    */
    vector<string> special1_tenji = { "12420","12422","12424","12431","12434","12435","12387","12540"};
    for (int i = 0; i < 8; i++) {
        tenji = make_tenji1(i);
        imwrite("Japanese_syllabary\\" + special1_tenji[i] + ".png", tenji);
    }

    /*
    vector<vector<string>> special2_tenji = {
        {"¤¬","¤¶","¤À","¤Ð","¤Ñ"},
        {"¤®","¤¸","¤Â","¤Ó","¤Ô"},
        {"¤°","¤º","¤Å","¤Ö","¤×"},
        {"¤²","¤¼","¤Ç","¤Ù","¤Ú"},
        {"¤´","¤¾","¤É","¤Ü","¤Ý"}
    };
    */
    vector<vector<string>> special2_tenji = {
        {"12364","12374","12384","12400","12401"},
        {"12366","12376","12386","12403","12404"},
        {"12368","12378","12389","12406","12407"},
        {"12370","12380","12391","12409","12410"},
        {"12372","12382","12393","12412","12413"}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tenji = make_tenji2(i, j);
            imwrite("Japanese_syllabary\\" + special2_tenji[i][j] + ".png", tenji);
        }
    }

    /*
    vector<vector<string>> special3_tenji = {
         {"¤­¤ã","¤­¤å","¤­¤ç"},
         {"¤·¤ã","¤·¤å","¤·¤ç"},
         {"¤Á¤ã","¤Á¤å","¤Á¤ç"},
         {"¤Ë¤ã","¤Ë¤å","¤Ë¤ç"},
         {"¤Ò¤ã","¤Ò¤å","¤Ò¤ç"},
         {"¤ß¤ã","¤ß¤å","¤ß¤ç"},
         {"¤ê¤ã","¤ê¤å","¤ê¤ç"},
         {"¤®¤ã","¤®¤å","¤®¤ç"},
         {"¤¸¤ã","¤¸¤å","¤¸¤ç"},
         {"¤Â¤ã","¤Â¤å","¤Â¤ç"},
         {"¤Ó¤ã","¤Ó¤å","¤Ó¤ç"},
         {"¤Ô¤ã","¤Ô¤å","¤Ô¤ç"}
    };
    */
    vector<vector<string>> special3_tenji = {
        {"1236512419","1236512421","1236512423"},
        {"1237512419","1237512421","1237512423"},
        {"1238512419","1238512421","1238512423"},
        {"1239512419","1239512421","1239512423"},
        {"1240212419","1240212421","1240212423"},
        {"1241512419","1241512421","1241512423"},
        {"1242612419","1242612421","1242612423"},
        {"1236612419","1236612421","1236612423"},
        {"1237612419","1237612421","1237612423"},
        {"1238612419","1238612421","1238612423"},
        {"1240312419","1240312421","1240312423"},
        {"1240412419","1240412421","1240412423"}
    };

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 3; j++) {
            tenji = make_tenji3(i, j);
            imwrite("Japanese_syllabary\\" + special3_tenji[i][j] + ".png", tenji);
        }
    }

    vector<string> number_tenji = { "1","2","3","4","5","6","7","8","9","0" };
    for (int i = 0; i < 10; i++) {
        tenji = make_tenji4(i);
        imwrite("Japanese_syllabary\\" + number_tenji[i] + ".png", tenji);
    }

    //¥¹¥Ú©`¥¹
    Mat aki;
    aki = Mat(Size(84, 158), CV_8UC3, Scalar(255, 255, 255));
    imwrite("Japanese_syllabary\\12288.png", aki);

}