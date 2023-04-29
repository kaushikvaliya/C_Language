//write a program to display to square boxes.
#include <stdio.h>
int main()
{
	int cols,rows;
	for(rows=1;rows<=22;rows++){
		printf("\n");
		for(cols=1;cols<=40;cols++){
			printf("\xDB");
		}
	}
	return 0;
}