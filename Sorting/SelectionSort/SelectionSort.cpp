/*
time -> O(n^2)
space -> O(1)

Algorithm maintain 2 sub arrays
  1.Sub array which is already stored
  2.Sub array which is not sorted
find minimum element in array or larger element
*/
#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}

void SelectionSort(int a[], int n)
{
    cout<<"Sorted array using selection sort: ";
    int i, j, min;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
               min = j;
        }
        swap(&a[min], &a[i]);
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
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    SelectionSort(a, n);
    display(a, n);
}
