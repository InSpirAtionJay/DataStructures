#include <stdio.h>


int  MaxSubSequenceSum_Divide_And_Conquer( int A[], int Left, int Right )
{
    int MaxLeftSum,MaxRightSum;
    int MaxLeftBorderSum,MaxRightBorderSum;
    int CurrentMaxLeftBorderSum,CurrentMaxRightBorderSum;
    int Center,i;
    if( Left == Right )
    {
        if( A[Left] >0 )
            return A[Left];
        else return 0;
    }
    Center = ( Left + Right )/2;
    MaxLeftSum=MaxSubSequenceSum_Divide_And_Conquer(A,Left,Center);
    MaxRightSum=MaxSubSequenceSum_Divide_And_Conquer(A,Center+1,Right);
    MaxLeftBorderSum=0;
    CurrentMaxLeftBorderSum=0;
    for(i=Center; i>=Left; i--)
    {
        CurrentMaxLeftBorderSum+=A[i];
        if(CurrentMaxLeftBorderSum>MaxLeftBorderSum)
            MaxLeftBorderSum=CurrentMaxLeftBorderSum;
    }
    MaxRightBorderSum=0;
    CurrentMaxRightBorderSum=0;
    for(i=Center+1; i<=Right; i++)
    {
        CurrentMaxRightBorderSum+=A[i];
        if(CurrentMaxRightBorderSum>MaxRightBorderSum)
            MaxRightBorderSum=CurrentMaxRightBorderSum;
    }
    return max(max(MaxLeftSum,MaxRightSum),MaxRightBorderSum+MaxLeftBorderSum);
}

int max(int a,int b)
{
    return (a>b)?a:b;
}



void main ()
{
    int a[]= {3,4,-4,-5,6,-3,6,5,9};
    int maxsub=MaxSubSequenceSum_Divide_And_Conquer(a,0,8);
    printf("%d\n",maxsub);
}
