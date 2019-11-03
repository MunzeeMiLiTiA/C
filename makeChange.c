#include <stdio.h>
#include <stdlib.h>

void MakeChange(int change, int *pQuarters, int *pDimes, int *pNickels, int *pPennies)
{
	*pQuarters = change / 25;
	change -= *pQuarters * 25;

	*pDimes = change / 10;
	change -= *pDimes * 10;

	*pNickels = change / 5;
	change -= *pNickels * 5;

	*pPennies = change;
}

void main()
{
	int change = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;

	printf("Enter the amount of change: ");
	scanf_s("%i", &change);

	MakeChange(change, &quarters, &dimes, &nickels, &pennies);

	printf("Change: %i\n\n", change);
	printf("Quarters: %i\n", quarters);
	printf("Dimes: %i\n", dimes);
	printf("Nickels: %i\n", nickels);
	printf("Pennies: %i\n", pennies);
	system("pause");
}