#include "MergeSort.h"

void MergeSort(T* A, int p, int r)	//[p, r]
{
	int q;
	if(r-p+1>THRESHOLD)
	{
		q=(p+r)/2;
		MergeSort(A, p, q);
		MergeSort(A, q+1, r);
		Merge(A, p, q, r);
	}
	else InsertionSortRise(&A[p], r-p+1);
}
/*
//Sentine1
void Merge(T* A, int p, int q, int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int i,j;
	T* L=(T*)malloc(sizeof(T)*(n1+1));
	T* R=(T*)malloc(sizeof(T)*(n2+1));
	for(i=0;i<n1;i++)
		L[i]=A[p+i];
	for(i=0;i<n2;i++)
		R[i]=A[q+i+1];
	L[n1]=MAX;
	R[n2]=MAX;
	i=0;
	j=0;
	for(int k=p;k<=r;k++)
	{
		if(L[i]<=R[j])	A[k]=L[i++];
		else		A[k]=R[j++];
	}
	free(L);
	free(R);
	L=NULL;
	R=NULL;
}
*/
//Sentine2
void Merge(T* A, int p, int q, int r)
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
			A[k]=TempArray[j--];
	}
	free(TempArray);
	TempArray=NULL;
}
