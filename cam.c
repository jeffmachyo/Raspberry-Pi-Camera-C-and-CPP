#include <signal.h>
#include <unistd.h>

static pid_t pid = 0;

void takePic (char* filename)
{
	if((pid = fork()) == 0)
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

