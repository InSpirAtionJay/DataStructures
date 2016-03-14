#include<stdio.h>
#include<malloc.h>
void CountintSort(int a[],int tmparray[],int MaxElement,int n)
{
    int *tmp,i,j;
    tmp=malloc((MaxElement+1)*sizeof(int));  
    for(i=0; i<=MaxElement; i++)       //先将tmp[a[i]]数组每一个元素置0     
        tmp[i]=0;
    for(j=0; j<n; j++)                 //此步tmp[a[i]]数组用来记录等于
        tmp[a[j]]++;                   //a[i]的数的个数
    for(i=1; i<=MaxElement; i++)       //此步tmp[a[i]]数组从tmp[0]开始逐步记录小于等于
        tmp[i]+=tmp[i-1];              //a[i]的数的个数//每次加前一项
    for(j=n-1; j>=0; j--)
    {
        tmparray[--tmp[a[j]]]=a[j];     //当小于等于某个数的数有x个，
    }                                   //那么这个数就位于数组中的x-1位
}

void main()
{
    int i;
    int a[8]= {2,5,3,0,2,3,0,3};
    int b[8]= {0};
    for(i=0; i<8; i++)
        printf("%d ",a[i]);
    CountintSort(a,b,5,8);
    printf("\n");
    for(i=0; i<8; i++)
        printf("%d ",b[i]);
}
