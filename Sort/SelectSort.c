#include<stdio.h>
void SelectSort(int a[],int n)
{
    int i,j,tmp,min;
    for(i=0; i<n-1; i++)
    {
        min=i;                        //��ѭ����������������n������n-1��
        for( j=i+1; j < n; j++)         //��һ�������������������бȽ�
            if(a[j]<a[min])min=j;         //ÿ���ҳ���С���������ż�Ϊmin
        tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;            //����С���뵱ǰ�����н�����ʹ��ÿ����С���ﵽ��ǰ��
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
