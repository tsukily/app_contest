#ifndef function_hpp

#define function_hpp

#include <stdio.h>
using namespace cv;
using namespace std;

Mat size_a4();
Mat find_tenji(uint32_t );
Mat find_tenji1(uint32_t, uint32_t);
int paste(Mat, Mat, int, int);


#endif  /* function_hpp */