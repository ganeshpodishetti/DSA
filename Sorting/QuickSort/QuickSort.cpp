#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[], int l, int r)
{
   int pivot = a[r];
   int swapIndex = l -1;
   for(int j=l; j<=r-1; j++)
   {
       if(a[j]<pivot){
         swapIndex++;
         swap(&a[swapIndex], &a[j]);
       }
   }
   swap(&a[swapIndex+1], &a[r]);
   return(swapIndex+1);
}

void quickSort(int a[], int l, int r)
{
    if(l<r)
    {
        int p = partition(a, l, r);
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
}

void dispaly(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    dispaly(a, n);
}