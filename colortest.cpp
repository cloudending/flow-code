// colortest.cpp

// create a test image showing the color encoding

//static char usage[] = "usage: %s range outimage [size]\n";
//
//#include <iostream>
//#include <math.h>
//#include "flowIO.h"
//#include "Image.h"
//#include "colorcode.h"
//#include "ImageIO.h"
//#include "colorcode.h"

//int main(int argc, char **argv)
//{
//    int verbose = 1;
//    if (argc < 3) {
//	fprintf(stderr, usage, argv[0]);
//	exit(1);
//    }
//    int optind = 1;
//    float truerange = atof(argv[optind++]);
//    char *outname = argv[optind++];
//    int size = optind < argc ? atoi(argv[optind++]) : 151;
//
//    float range = 1.04 * truerange; // make picture a bit bigger to show out-of-range coding
//    try {
//	//CShape sh(size, size, 3);
//	//CByteImage out(sh);
//		ByteImage out(size, size, 3);
//		int s2 = size/2;
//		for (int y = 0; y < size; y++) {
//			for (int x = 0; x < size; x++) {
//			float fx = (float)x / (float)s2 * range - range;
//			float fy = (float)y / (float)s2 * range - range;
//			if (x == s2 || y == s2) // make black coordinate axes
//				continue;
//		//uchar *pix = &out.Pixel(x, y, 0);
//			uchar* pix = &out.GetData()[(y*size+x)*3];
//		//fx = rintf(fx);
//		//fy = rintf(fy);
//			computeColor(fx/truerange, fy/truerange, pix);
//	    }
//	}
//		int ir = (int)truerange;
//		int ticksize = size < 120 ? 1 : 2;
//		for (int k = -ir; k <= ir; k++) {
//			int ik = (int)(k / range * s2) + s2;
//			for (int t = -ticksize; t <= ticksize; t++) {
//				uchar *pix;
//		//pix = &out.Pixel(ik, s2 + t, 0); 
//				pix = &out.GetData()[((s2+t)*out.GetWidth()+ik)*3];
//				pix[0] = pix[1] = pix[2] = 0;
//		//pix = &out.Pixel(s2 + t, ik, 0); 
//				pix = &out.GetData()[(ik*out.GetWidth()+s2+t)*3];
//				pix[0] = pix[1] = pix[2] = 0;
//	    }
//	}
//
//		WriteImageVerb(out, outname, verbose);
//    }
//    catch (CError &err) {
//	fprintf(stderr, err.message);
//	fprintf(stderr, "\n");
//	exit(1);
//    }
//    return 0;
//}

//int main(){
//	FloatImage flowimg;
//	ReadFlowFile(flowimg,"F:\\dataset\\other-gt-flow\\other-gt-flow\\Grove2\\flow10.flo");
//	//WriteFlowFile(inputimg, "F:\\dataset\\other-gt-flow\\other-gt-flow\\Dimetrodon\\flow11.flo");
//	ByteImage colorimg;
//	MotionToColor(flowimg, colorimg, 10);
//	WriteImage(colorimg, "F:\\color.png");
//	std::cin.get();
//	//WriteImage()
//}

