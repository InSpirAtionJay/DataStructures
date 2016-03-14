#include<stdio.h>
void InsertionSort(int a[],int n)
{
    int i,j;
    for( i = 1; i < n; i++ )   //从1开始
    {
        int tmp = a[i];       //重点用tmp保存当前a[i]的值
        for( j = i; j > 0 && tmp < a[j-1]; j--) //不能用a[i]代替tmp
        {
            a[j] = a[j-1];    //会改变a[i]的值
        }
        a[j] = tmp;           //当找到比其值小的数，将tmp放在其后
    }
}

void main()
{
    int i;
    int a[10] = {2,4,1,7,3,9,5,8,0,6};
    for(i = 0; i<10; i++ )
        printf( "%d ", a[i] );
    printf("\n");
    InsertionSort( a, 10 );
    for( i = 0; i < 10; i++ )
        printf( "%d ",a[i] );
}
