#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vectorCalculation(double x, double y, double z,double *pMagnitudeInMeters,double *pMagnitudeInFeet)
{
	*pMagnitudeInMeters = sqrt(x * x + y * y + z * z);
	*pMagnitudeInFeet = *pMagnitudeInMeters * 3.28084;
}



void main()
{
	double x, y, z, magnitudeInFeet, magnitudeInMeters;

	printf("Enter the x component in meters:  ");
	scanf_s("%lf", &x);
	printf("Enter the y component in meters:  ");
	scanf_s("%lf", &y);
	printf("Enter the z component in meters:  ");
	scanf_s("%lf", &z);

	
	vectorCalculation(x, y, z, &magnitudeInMeters, &magnitudeInFeet);

	//Used the code below to test the math first before making the void function.
	//magnitudeInMeters = sqrt(x * x + y * y + z * z);
	//magnitudeInFeet = magnitudeInMeters * 3.28084;

	printf("Magnitude in meters:  %.2lf\n", magnitudeInMeters);
	printf("Magnitude in feet:  %.2lf\n", magnitudeInFeet);

	system("pause");
}