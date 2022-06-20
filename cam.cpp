#include <signal.h>
#include <unistd.h>
#include <string>

static pid_t pid = 0;
using namespace std;

void takePic (char* filename) 
{
	if ((pid = fork()) == 0) 
	{
		execl("/usr/bin/raspistill",
			"/usr/bin/raspistill",
			"-n",
			"-vf",
			"-o",
			filename,
			NULL);
	}
}

void stopPic (void) 
{
	if (pid) 
	{
		kill(pid, 10);
	}
}	

