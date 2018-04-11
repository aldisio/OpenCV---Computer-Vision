#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

/************************************************************************
Abrindo uma imagem (Arquivo: bolhas.png) e exibindo a imagem carregada.
************************************************************************/
int main(int argc, char** argv){
	Mat image;
	image = imread("bolhas.png", CV_LOAD_IMAGE_GRAYSCALE);

	imshow("Nova Imagem", image);
	waitKey(0);
	return 0;
}