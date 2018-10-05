#include "MergeInversions.h"

//if sort==1, count the inversions and sort the array
//else, copy the array to a new address and count the inversions
int CountInversions(T* A, int n, bool sort)
{
	int* num=(int*)malloc(sizeof(int));
	int counts;
	if(sort)
		MergeInversions(A, 0, n-1, num);
	else
	{
		T* newArray=(T*)malloc(sizeof(T)*(n));
		for(int i=0;i<n;i++)
			newArray[i]=A[i];
		MergeInversions(newArray, 0, n-1, num);
		free(newArray);
		newArray=NULL;
	}
	counts=*num;
	free(num);
	num=NULL;
	return counts;
}
void MergeInversions(T* A, int p, int r, int* np)	//[p, r]
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		MergeInversions(A, p, q, np);
		MergeInversions(A, q+1, r, np);
		MergeCountInversions(A, p, q, r, np);
	}
}
void MergeCountInversions(T* A, int p, int q, int r, int* np)
{
	int i,j,k;
	T* TempArray=(T*)malloc(sizeof(T)*(r-p+1));
	for(i=p;i<=q;i++)
		TempArray[i-p]=A[i];
	for(i=r;i>q;i--)
		TempArray[r-p+q+1-i]=A[i];
	for(i=0,j=r-p,k=p;k<=r;k++)
	{
		if(TempArray[i]<=TempArray[j])
			A[k]=TempArray[i++];
		else		
		{
			A[k]=TempArray[j--];
			np[0]=np[0] + q-p-i+1;//accumulate the inversions
		}
	}
	free(TempArray);
	TempArray=NULL;
}
int antiCountInversions(T* A, int n, bool sort)
{
	int* num=(int*)malloc(sizeof(int));
	int counts;
	if(sort)
		antiMergeInversions(A, 0, n-1, num);
	else
	{
		T* newArray=(T*)malloc(sizeof(T)*(n));
		for(int i=0;i<n;i++)
			newArray[i]=A[i];
		antiMergeInversions(newArray, 0, n-1, num);
		free(newArray);
		newArray=NULL;
	}
	counts=*num;
	free(num);
	num=NULL;
	return counts;
}
void antiMergeInversions(T* A, int p, int r, int* np)	//[p, r]
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		antiMergeInversions(A, p, q, np);
		antiMergeInversions(A, q+1, r, np);
		antiMergeCountInversions(A, p, q, r, np);
	}
}
void antiMergeCountInversions(T* A, int p, int q, int r, int* np)
{
	int i,j,k;
	T* TempArray=(T*)malloc(sizeof(T)*(r-p+1));
	for(i=p;i<=q;i++)
		TempArray[i-p]=A[i];
	for(i=r;i>q;i--)
		TempArray[r-p+q+1-i]=A[i];
	for(i=0,j=r-p,k=p;k<=r;k++)
	{
		if(TempArray[i]>=TempArray[j])
			A[k]=TempArray[i++];
		else		
		{
			A[k]=TempArray[j--];
			np[0]=np[0] + q-p-i+1;//accumulate the inversions
		}
	}
	free(TempArray);
	TempArray=NULL;
}
