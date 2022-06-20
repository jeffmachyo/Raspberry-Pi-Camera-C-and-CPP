#include "cam.h"
#include <iostream>

using namespace std;

int main (void)
{
	char filename[] = "/home/pi/Documents/Projects/image1.jpg";
	takePic(filename);
	//stopPic();
	cout << "Image successful.."<<endl;
	return 0;
}


