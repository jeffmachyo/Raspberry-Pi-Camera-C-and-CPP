#include "cam.h"
#include <stdio.h>


int main (void) 
{
    //Input your desired filepath in place of the filepath denoted here
	char filename[] = "/home/pi/Documents/Projects/image1.jpg";
	takePic(filename);
	printf("Image successful..\n");

	return 0;
}
