#ifndef sort_h
#define sort_h
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void bubble1(int a[], int n);
void bubble2(int a[], int n);
void bubble3(int a[], int n);
int Partition(int a[], int low, int high);
int Partition2(int a[], int low, int high);
void InsertSort(int a[],int n);
void SelectSort(int a[], int n);
void QSort(int a[], int low, int high);
void QuickSort(int a[], int n);

#endif
