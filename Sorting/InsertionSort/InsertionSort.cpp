/* 
time -> O(n^2)
space -> O(1)

Efficient for small data
better than selection and bubble sort
Stable
In-Place
Iterative
Internal
*/
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    cout<<"sorted array using insertion sort"<<endl;
    int target, i, j;
    for(int i=1; i<n; i++)
    {
        target = a[i];
        j = i-1;
        while(a[j]>target && j>=0)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1]=target;
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
    insertionSort(a, n);
    dispaly(a, n);
}