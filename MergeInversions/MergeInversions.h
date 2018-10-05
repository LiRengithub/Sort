#ifndef _MERGEINVERSIONS_H
#define _MERGEINVERSIONS_H

#include "malloc.h"
#include "stdbool.h"
typedef char T;
int CountInversions(T* A,int n, bool sort);
void MergeInversions(T* A, int p, int r, int* np);
void MergeCountInversions(T* A, int p, int q, int r, int* np);
int antiCountInversions(T* A,int n, bool sort);
void antiMergeInversions(T* A, int p, int r, int* np);
void antiMergeCountInversions(T* A, int p, int q, int r, int* np);


#endif

