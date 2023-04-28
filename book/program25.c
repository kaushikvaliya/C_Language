// read the price of item in decimal from 13.20 and separate RS.and paisa from the given value.(E.g. 13 rupees and 20 paisa).
#include <stdio.h>
int main()
{
	float total;
	int p, r;
	printf("Enter Amount :");
	scanf("%f", &total);
	r = total;
	p = (total - r) * 100;
	printf("Rupees = %d\n", r);
	printf("Paisa = %d\n", p);
	return 0;
}