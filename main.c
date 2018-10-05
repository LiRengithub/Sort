#include <stdio.h>
#include "GenerateRandomArray/GenerateRandomArray.h"
#include "MergeSort/MergeSort.h"
#include "Inversions/Inversions.h"

int main(void)
{
	int n=1000;
	long int Time;
	T* A=GenerateRandomArray(n);

	printf("the inverse ordinal before sorting is: %d\n", CountInversions(A, n, 0));
	printf("the ordinal before sorting is: %d\n\n", antiCountInversions(A, n, 0));

	Time=clock();
	MergeSort(A, 0, n-1);
	Time=clock()-Time;
	printf("spend %ld clock cycles to sort\n\n",Time);

	printf("the inverse ordinal before sorting is: %d\n", CountInversions(A, n, 0));
	printf("the ordinal before sorting is: %d\n\n", antiCountInversions(A, n, 0));

	return 0;
}
