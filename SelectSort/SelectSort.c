#include "SelectSort.h"

void SelectSort(T* A, int n)
{
	int i,j;
	int r;
	T temp;
	for(i=0;i<n-1;i++)
	{
		r=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[r])
			{
				r=j;
			}
		}
		temp=A[r];
		A[r]=A[i];
		A[i]=temp;
	}
}

