#include <stdio.h>
int MaxSubSequenceSum_TwoFor( int A[], int N )
{
    int CurrentSum, MaxSum, i, j;
    MaxSum = 0;
    for( i = 0; i < N; i++ )
    {
        CurrentSum=0;
        for( j = i ; j < N; j++ )
        {
            CurrentSum += A[j];
            if( CurrentSum > MaxSum )
                MaxSum = CurrentSum;
        }
    }
    return MaxSum;
}

int MaxSubSequenceSum_For(int A[], int N )
{
    int CurrentSum,MaxSum,i;
    CurrentSum=0;
	MaxSum=0;
    for(i=0; i<N; i++)
    {
        CurrentSum+=A[i];
        if(CurrentSum>MaxSum)
            MaxSum=CurrentSum;
        else if(CurrentSum<0)
            CurrentSum=0;
    }
    return MaxSum;
}

void main ()
{
    int a[]= {3, 4, -4, -5, 4, -3, 7, 0, 9};
    int maxsub=MaxSubSequenceSum_For(a,9);
    printf("%d\n",maxsub);                     //output 17
    int b[]= {3, 4, -4 ,-5, 4, -3, 7, 8, 9};
    maxsub=MaxSubSequenceSum_TwoFor(b,9);
    printf("%d\n",maxsub);                     //output 25
    int b[]= {3, 4, -4 ,-5, 4, -3, 7, 8, 9};
}
