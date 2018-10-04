#include "GenerateRandomArray.h"

T* GenerateRandomArray(int k)
{
	//generate k random numbers of type<T> form m to n : [m, n)
	char m,n;
	m=20;
	n=100;

	T* A=(T*)malloc(sizeof(T)*k);
	srand(time(NULL));
	for(int i=0;i<k;i++)
	{
		A[i]=rand()%(n-m)+m;
	}
	return A;
}
