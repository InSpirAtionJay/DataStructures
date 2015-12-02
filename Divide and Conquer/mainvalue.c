#include <stdio.h>
int find(int a[],int left,int right,int size){
	int leftmain=0,rightmain=0;
	int mid=(left+right)/2;
	if(right-left==0) return a[left];
        int i;
		int a1=find(a,left,mid,size);
		int a2=find(a,mid+1,right,size);
		if(a1==-1||a2==-1)return -1;
		for(i=0;i<size;i++){
			if(a[i]==a1)leftmain++;
			if(a[i]==a2)rightmain++;
		}
		if(leftmain>size/2)return a1;
        if(rightmain>size/2)return a2;
		else return -1;

	}


void main(){
	int a[10]={0,0,5,4,2,0,3,2,2,5};
    int x=find(a,0,9,10);
	printf("%d\n",x);
}
