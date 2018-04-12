#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv){
	Mat image;
	Vec3b pixel;
	image = imread("koala.jpg", CV_LOAD_IMAGE_COLOR);
	imshow("Imagem Colorida", image);
	

	int ini_x, fim_x, ini_y, fim_y;
	cout << "Digite as cordenadas inicio e fim do ponto X";
	cin >> ini_x >> fim_x;

	cout << "Digite as cordenadas inicio e fim do ponto Y";
	cin >> ini_y >> fim_y;

	for(int x = ini_x; x<fim_x;x++){
		for (int y=ini_y; y<fim_y; y++){			

			pixel = image.at<Vec3b>(x, y);
			pixel[0] = 255 - pixel[0];
			pixel[1] = 255 - pixel[1];
			pixel[2] = 255 - pixel[2];
			image.at<Vec3b>(x, y) = pixel;
		}
	}

	imshow("Imagem Alterada", image);

	waitKey(0);
	return 0;	
}