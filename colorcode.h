#ifndef COLORCODE_H_
#define COLORCODE_H_


void computeColor(float fx, float fy, uchar *pix);
void makecolorwheel();
void setcols(int r, int g, int b, int k);
void MotionToColor(FloatImage motim, ByteImage &colim, float maxmotion);
#endif