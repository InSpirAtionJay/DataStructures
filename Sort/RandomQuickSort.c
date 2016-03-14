#include<stdio.h>
#include<stdlib.h>
#define ElementType int
void Swap( ElementType *p, ElementType *q )
{
    ElementType tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}


int RandomQuickPartition( ElementType A[], int left, int right )
{
    int i = rand()%(right-left+1)+left;
    Swap( &A[right], &A[i] );
    int Pivot = A[right];
    i = left-1;
    int j;
    for( j = left; j < right; j++ )
    {
        if( A[j] <= Pivot)
            Swap( &A[++i], &A[j] );
    }
    Swap( &A[i+1], &A[right] );
    return i+1;
}

void RandomQuickSort( ElementType A[], int left, int right )
{
    if( left < right )
    {
        int tmp = RandomQuickPartition( A, left, right );
        RandomQuickSort( A, left, tmp-1 );
        RandomQuickSort( A, tmp+1, right );
    }
}


void main()
{
    int i;
    int a[10]= {9,2,5,3,8,4,1,7,0,5};
    RandomQuickSort( a, 0, 9 );
    for( i = 0; i < 10; i++ )
        printf("%d ",a[i]);

}
