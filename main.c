#include <stdio.h>
#include "GenerateRandomArray/GenerateRandomArray.h"
#include "InverseOrdinal/InverseOrdinal.h"
#include "MergeSort/MergeSort.h"

int main(void)
{
	int n=1000;
	long int Time;
	char *A=GenerateRandomArray(n);
	printf("the inverse ordinal before sorting is: %d\n", InverseOrdinal(A, n));
	printf("the ordinal before sorting is: %d\n\n", Ordinal(A, n));

	Time=clock();
	MergeSort(A, 0, n-1);
	Time=clock()-Time;
	printf("spend %ld clock cycles\n",Time);

	printf("the inverse ordinal after sorting is: %d\n", InverseOrdinal(A, n));
	printf("the ordinal after sorting is: %d\n", Ordinal(A, n));

	return 0;
}
