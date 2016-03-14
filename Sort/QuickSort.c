#include<stdio.h>
#define ElementType int
#define Cutoff 3
void Swap(ElementType *p,ElementType *q)
{
    ElementType tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

void InsertionSort(int a[],int n)
{
    int i,j;
    for( i = 1; i < n; i++ )   //��1��ʼ
    {
        int tmp = a[i];       //�ص���tmp���浱ǰa[i]��ֵ
        for( j = i; j > 0 && tmp < a[j-1]; j--) //������a[i]����tmp
        {
            a[j] = a[j-1];    //��ı�a[i]��ֵ
        }
        a[j] = tmp;           //���ҵ�����ֵС��������tmp�������
    }
}

ElementType Median3(ElementType A[],int left,int right)
{
    int center=(left+right)/2;
    if(A[left]>A[center])
        Swap(&A[left],&A[center]);
    if(A[left]>A[right])
        Swap(&A[left],&A[right]);
    if(A[center]>A[right])
        Swap(&A[center],&A[right]);
    Swap(&A[center],&A[right-1]);
    return A[right-1];
}

void QuickSort(ElementType A[],int left,int right)
{
    int i,j;
    ElementType Pivot;
    if(left+Cutoff >= right)
    {
        Pivot=Median3(A,left,right);
        i=left;
        j=right-1;
        while(1)
        {
            while(A[++i]<Pivot) {}
            while(A[--j]>Pivot) {}
            if(i<j)
                Swap(&A[i],&A[j]);
            else
                break;
        }
        Swap(&A[i],&A[j-1]);
        QuickSort(A,left,i-1);
        QuickSort(A,i+1,right);
    }
    else
        InsertionSort(A+left,right-left+1);
}
void main()
{
    int i;
    int a[10]= {9,2,6,3,8,4,1,7,0,5};
    QuickSort(a, 0, 9);
    for(i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}
