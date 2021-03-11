#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void bubbleSort(int a[], int n)
{
    cout<<"sorted array"<<endl;
    for(int i=n-1; i>=0; i--)
    {
        int swaps = 0;
        for(int j=0; j<i; j++)
        {
            if(a[j]>a[j+1]){
              swap(&a[j], &a[j+1]);
              swaps=1;
            }
        }
        if(swaps==0){
          break;
        }
    }
}

void display(int a[], int n)
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
    bubbleSort(a, n);
    display(a, n);
}