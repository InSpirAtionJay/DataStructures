#ifndef BIN_SEARCH_H_INCLUDED
#define BIN_SEARCH_H_INCLUDED

int bin_search(int a[],int n,int x)
{
    int left=0,right=n-1;
    int mid=(left+right)/2;
    while(left<=right)
    {
        if(x>a[mid])left=mid+1;
        else if (x<a[mid]) right=mid-1;
        else return mid;
        mid=(left+right)/2;
    }
    return -1;
}

#endif // BIN_SEARCH_H_INCLUDED
