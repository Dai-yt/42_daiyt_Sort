#include "sort.h"
#define N 20

int main() {
        int a[N], i;
        srand(time(0));

        for (i=0; i<N; i++)
                a[i] = rand() % 100;
        printf("初始数据为 : ");

        for (i=0; i<N; i++)
                printf("%d ", a[i]);
        printf("\n");
        bubble1(a, N);
        //bubble2(a, N);
        //bubble3(a, N);
        printf("冒泡排序为 : ");
        for (i=0; i<N; i++)
                printf("%d ", a[i]);


        for (i=0; i<N; i++)
                a[i] = rand() % 100;
	printf("\n");
        printf("初始数据为 : ");
        for (i=0; i<N; i++)
                printf("%d ", a[i]);
        QuickSort(a, N);
        //MergeSort(a, N);
	printf("\n");
        printf("快速排序为 : ");
        for (i=0; i<N; i++)
                printf("%d ", a[i]);


        for (i=0; i<N; i++)
                a[i] = rand() % 100;
	printf("\n");
        printf("初始数据为 : ");
        for (i=0; i<N; i++)
                printf("%d ", a[i]);
	InsertSort(a, N);
        //SelectSort(a, N);
	printf("\n");
        printf("插入排序为 : ");
        for (i=0; i<N; i++)
                printf("%d ", a[i]);

}

