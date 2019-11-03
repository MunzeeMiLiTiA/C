#include <stdio.h>
#include <stdlib.h>

void secondsConversion(int secondsInput, int *sec, int *min, int *hr);

void main()
{
	int input = 0;
	int secOut = 0;
	int minOut = 0;
	int hrOut = 0;

	printf("Enter the number of seconds: ");
	scanf_s("%i", &input);

	secondsConversion(input, &secOut, &minOut, &hrOut);
	printf("Seconds: %i      Hours: %i Minutes: %i Seconds: %i\n",
		input, hrOut, minOut, secOut);
	system("pause");
}

void secondsConversion(int secondsInput, int *pSec, int *pMin, int *pHr)
{
	*pHr = secondsInput / 3600;  //seconds to hour is 60 * 60
	*pMin = (secondsInput / 60) % 60;
	*pSec = secondsInput % 60;
}