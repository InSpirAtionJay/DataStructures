#include<stdio.h>
void BubbleSort(int a[],int n)
{
    int i,j,tmp;
    for(i=0; i<n-1; i++)               //��ѭ����������������n������n-1��
        for(j=0; j<n-1-i; j++)         //��n������Ҫ��n-1-i��
        {
            if(a[j+1]<a[j])            //�����һ������ǰһ����С�򽻻�;
            {                          //��αȽ����ڵ�������
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }                          //ÿһС��ѭ�������������ĩβ
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
