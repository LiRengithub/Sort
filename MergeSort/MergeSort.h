#ifndef _MERGESORT_H
#define _MERGESORT_H

#include "malloc.h"
#include "../InsertionSort/InsertionSort.h"
#define THRESHOLD 28
#define MAX 127
typedef char T;
void MergeSort(T* A, int p, int r);
void Merge(T* A, int p, int q, int r);


#endif

