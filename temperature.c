#include <stdlib.h>
#include <stdio.h>

void temperatureConversion(double fahrenheit, double *pCelsius, double *pKelvin)
{
	*pCelsius = (5.0 / 9.0) * (fahrenheit - 32);
	*pKelvin = *pCelsius + 273.15;
}

void main()
{
	double fahrenheit = 0.0;
	double celsius = 0.0;
	double kelvin = 0.0;

	printf("Fahrenheit\tCelsius\tKelvin\n\n");
	for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 10)
	{
		temperatureConversion(fahrenheit, &celsius, &kelvin);
		printf("%.2lf\t\t%.2lf\t%.2lf\n", fahrenheit, celsius, kelvin);
	}
	system("pause");
}