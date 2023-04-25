#include <stdio.h>
int main()
{
	int x=1,y=3,z=1,a;
	a= --x &&	y++ || --z;
	printf("a=%d,x=%d,y=%d,z=%d\n",a,x,y,z);
	return 0;
}