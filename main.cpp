#include "cam.h"
#include <iostream>

using namespace std;

int main (void) 
{
    //Input your desired filepath in place of the filepath denoted here
	char filename[] = "/home/pi/Documents/Projects/image1.jpg";
	takePic(filename);
	cout<<"Image successful.."<<endl;

	return 0;
}


