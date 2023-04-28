//write a progran to convert and print this distance in meter ,feet,inches and centimeter. 
#include <stdio.h>
int main()
{
	float km,meter,feet,inches,centi;
	
	printf("Enter Kilometer :");
	scanf("%f" , &km);
	meter=km*1000;
	feet=meter*3.33;
	inches=feet*12;
	centi=meter*100;
	printf("Kilometer=%.2f\n",km);
	printf("Meter=%.2f\n",meter);
	printf("feet=%.2f\n",feet);
	printf("Inches=%.2f\n",inches);
	printf("Centimeter=%.2f\n",centi);
	return 0;
}	