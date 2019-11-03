#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 5;
	int y = 10;
	int z = 15;
	int *pointer;

	pointer = &x;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
	*pointer = 100;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);

	pointer = &y;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
	*pointer = 200;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);

	pointer = &z;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
	*pointer = 300;
	printf("X: %d Y: %d Z: %d \t\tpointer: 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
	system("pause");


	system("pause");
}