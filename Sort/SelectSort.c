#include<stdio.h>
void SelectSort(int a[],int n)
{
    int i,j,tmp,min;
    for(i=0; i<n-1; i++)
    {
        min=i;                        //外循环控制排序趟数，n个数排n-1趟
        for( j=i+1; j < n; j++)         //拿一个数和其他所有数进行比较
            if(a[j]<a[min])min=j;         //每次找出最小数的数组标号记为min
        tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;            //将最小数与当前数进行交换，使得每次最小数达到最前面
    }
}


void main()
{
    int i;
    int a[10]= {2,3,6,3,0,4,7,8,6,4};
    SelectSort(a,10);
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
}
