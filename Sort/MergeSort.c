#include<stdio.h>
#include<malloc.h>
void Merge(int a[],int tmparray[],int left,int rightstart,int right)
{
    int i;
    int leftend=rightstart-1;
    int num=right-left+1;
    int tmp=left;
    while(left<=leftend&&rightstart<=right)
    {
        if(a[left]<=a[rightstart])
            tmparray[tmp++]=a[left++];
        else
            tmparray[tmp++]=a[rightstart++];
    }
    while(left<=leftend)tmparray[tmp++]=a[left++];
    while(rightstart<=right)tmparray[tmp++]=a[rightstart++];
    for(i=0; i<num; i++,right--)
        a[right]=tmparray[right];
}

void MSort(int a[],int tmparray[],int left,int right)
{
    int center;
    if(left<right)
    {
        center=(left+right)/2;
        MSort(a,tmparray,left,center);
        MSort(a,tmparray,center+1,right);
        Merge(a,tmparray,left,center+1,right);
    }
}

void MergeSort(int a[],int n)
{
    int *tmparray;
    tmparray=malloc(n*sizeof(int));
    if(tmparray!=NULL)
    {
        MSort(a,tmparray,0,n-1);
        free(tmparray);
    }
    else printf("ERROR!!!");
}


void main()
{
    int i;
    int a[10]= {2,4,1,7,3,9,5,8,0,6};
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
    MergeSort(a,10);
    printf("\n");
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
}
