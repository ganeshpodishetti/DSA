#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSortInc(int a[], int n)
{
    for(int i=n-1; i>=0; i--) //from last to fast
    /* from first to last -> 
    for(int i=0; i<n-1; i++)
    {
       for(int j=0; j<n-i-1; j++)
    }
    */
    {
        for(int j=0; j<i; j++)
        {
            if(a[j]>a[j+1]) // increasing order
               swap(&a[j], &a[j+1]);
        }
    }
}
void bubbleSortDec(int a[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(a[j]<a[j+1]) // decreasing order
               swap(&a[j], &a[j+1]);
        }
    }
}
void display(int a[], int size)
{
    cout<<"Sorted Array"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n]; // array size = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubbleSortInc(a, n);
    display(a, n);
    cout<<endl;
    bubbleSortDec(a, n);
    display(a, n);
}