#include<stdio.h>
void BubbleSort(int a[],int n)
{
    int i,j,tmp;
    for(i=0; i<n-1; i++)               //外循环控制排序趟数，n个数排n-1趟
        for(j=0; j<n-1-i; j++)         //第n个数需要比n-1-i趟
        {
            if(a[j+1]<a[j])            //如果后一个数比前一个数小则交换;
            {                          //逐次比较相邻的两个数
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }                          //每一小次循环后最大数到达末尾
        }
}


void main()
{
    int i;
    int a[10]= {2,3,6,3,0,4,7,8,6,4};
    BubbleSort(a,10);
    for(i=0; i<10; i++)
        printf("%d ",a[i]);
}
