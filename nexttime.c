#include <stdio.h>

int main()
{
	int Time = 30, nextTime;

	printf("the current time: %d\n", Time);
	nextTime = ++Time;

	printf("the next sec: %d\n", nextTime);

	return 0;

}
