#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int Partition(int a[], int low,int high)
{
    int i=low-1;
    int j=low;
    int pivot = a[high];
    while(j<high)
    {
        if(a[j]>pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quick_sort(int a[],int low,int high)
{
    if(low>=high)
        return;
    int p = Partition(a,low,high);

    quick_sort(a,low,p-1);

    quick_sort(a,p+1,high);

}

int main()
{
    int a[]={1,5,6,3,5,8,7,2,9},n=8;
    quick_sort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
