#include <sys/ioctl.h>
#include <stdio.h>

using namespace std;

int main(void) {
	struct winsize w;
	ioctl(0,TIOCGWINSZ, &w);

	for (int i = 0; i < w.ws_row; i++) {
		printf("\n");
	}

	printf("\033[%d;%dH", 0, 0);
	return 0;
}