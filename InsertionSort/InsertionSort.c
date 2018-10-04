#include "InsertionSort.h"

void InsertionSortRise(T* A, int n)
{
	T key;
	int i,j;
	for(j=1;j<n;j++)
	{
		key = A[j];	
		i = j-1;
		while(i>=0&&A[i]>key)
		{
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	}
}

void InsertionSortDown(T* A, int n)
{
	T key;
	int i,j;
	for(j=1;j<n;j++)
	{
		key = A[j];	
		i = j-1;
		while(i>=0&&A[i]<key)
		{
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = key;
	}
}
