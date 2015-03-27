#include <stdio.h>

#include <time.h>

#include <stdlib.h>  // include srand function

#pragma warning(disable : 4996) 

#define Size 15

void main() {
	int a[Size];
	int i;
	double b1[Size], b2[Size];
	srand((unsigned)time(NULL));
	// Use current time as seed 
	clock_t start, end;
	float time;
	// apply (start) timestamp 
	start = clock();
	for (i = 0; i < Size; i++)

	{
		// initialize the array using random number between 0 and 99 

		a[i] = rand() % 100;

		b1[i] = a[i] / 5;

		printf("a[%d] = %d\n", i, a[i]);

		printf("b1[%d] = %f\n", i, b1[i]);

		b2[i] = a[i];

		b2[i] = b2[i] / 5;

		printf("b2[%d] = %f\n", i, b2[i]);

	}

	// apply (end) timestamp 
	end = clock();
	// compute elapsed time in seconds
	time = (float)(end - start) / 1000;
	// display elapsed time in seconds
	printf("Time elapsed : %f s\n", time);
	getchar();
}
