﻿#include <oclUtils.h>
#include <iostream>
#include "cv.h"
#include "cxmisc.h"
#include "highgui.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "GPUTransferManager.h"
#include "GPUImageProcessor.h"
#include "SIFT.h"

#include "stdafx.h"


using namespace std;




// The main function!
int main()
{
	// Create an instance of SIFT
	SIFT *sift = new SIFT("C:\\car.jpg", 4, 2);

	sift->DoSift();				// Find keypoints
	//sift->ShowAbsSigma();		// Display the sigma table
	//sift->ShowKeypoints();		// Show the keypoints
	cvWaitKey(0);				// Wait for a keypress

	// Cleanup and exit
	delete sift;
	return 0;
}



//
//
//int main(int argc, const char** argv)
//{
//
//
//	IplImage* img = cvLoadImage("./img/car.jpg");
//	
//
//	GPUImageProcessor* GPU = new GPUImageProcessor(img->width,img->height,img->nChannels);
//
//
//	
//	GPU->AddProcessing( new Feature("./CL/SIFT.cl",GPU->GPUContext,GPU->Transfer,"ckBuildPyramid") );
//
//
//	GPU->Transfer->CreateBuffers();
//	GPU->Transfer->SendImage(img);
//	GPU->Process();
//	img = GPU->Transfer->ReceiveImage();
//
//	cout << "-------------------------\n\n" << endl;
//
//    cvNamedWindow("sobel", CV_WINDOW_AUTOSIZE); 
//    cvShowImage("sobel", img );
//    cvWaitKey(2);
//
//
//
//	getchar();
//    return 0;
//
//}
//


