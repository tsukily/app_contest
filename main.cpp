#include <opencv2/opencv.hpp>
#include <stdio.h>
#include<iostream>
#include <vector>
#include "creattenji.hpp"
#include "function.hpp"

#include <fstream>
#include <string>
#include <vector>
#include "utf8.h"
using namespace cv;
using namespace std;

int main()
{
    int count = 0;
    int x =0, x_plus=0, y = 0;
    uint32_t *moji;


    //点字ファイルを作成する
    JapaneseSyllabary();
    Mat tenji, whiteflip;
    Mat white = size_a4();
    //imwrite("a4.png", white);

    const char* str1 = u8"びじょと　やじゅー";
    const char* it = str1;
    const char* end = str1 + strlen(str1);

    // 文字列の長さを取得
    int length = utf8::distance(it, end);
    cout << "長さ: " << length << endl;
    cout << hex;

    moji = new uint32_t[length];

    while (it < end) {
        uint32_t code = utf8::next(it, end);
        moji[count] = code;
        count++;

        /*
        //cout << code << " ";
        tenji = find_tenji(code);
        //imshow("title", tenji);
        //waitKey(0);
        x = x+84* x_plus;
        x_plus =paste(white, tenji,x, y);
        cout << "x_plus:" << x_plus << endl;
        */
        
    }

    for (int i = 0; i < length; i++) {
        cout << moji[i] << endl;

        if (i != length - 1) {
            if (moji[i] == 12365 || moji[i] == 12375 || moji[i] == 12385 || moji[i] == 12395 || moji[i] == 12402 || moji[i] == 12415 || moji[i] == 12426 || moji[i] == 12366 || moji[i] == 12376 || moji[i] == 12386 || moji[i] == 12403 || moji[i] == 12404) {
                if (moji[i + 1] == 12419 || moji[i + 1] == 12421 || moji[i + 1] == 12423) {
                    tenji = find_tenji1(moji[i],moji[i+1]);
                    i = i + 1;
                    x = x + 84 * x_plus;
                    x_plus = paste(white, tenji, x, y);
                    continue;
                }
            }
        }

        tenji = find_tenji(moji[i]);
        x = x + 84 * x_plus;
        x_plus = paste(white, tenji, x, y);

        //imshow("title", tenji);
        //waitKey(0);

    }
    imwrite("a4_読む.png", white);
    flip(white, whiteflip, 1);
    imwrite("a4_書く.png", whiteflip);

    return 0;
}