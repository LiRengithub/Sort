#include "InverseOrdinal.h"

int InverseOrdinal(T* A, int n)
{
	int i, j, num=0;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(A[i]>A[j])	num++;
	}
	return num;
}

int Ordinal(T* A, int n)
{
	int i, j, num=0;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(A[i]<A[j])	num++;
	}
	return num;
}
