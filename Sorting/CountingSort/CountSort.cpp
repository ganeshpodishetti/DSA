#include <bits/stdc++.h>
using namespace std;

int findMax(int a[], int n)
{
    int max = a[0];
    for(int i=1; i<n; i++)
    {
      if(a[i]>max){
        max=a[i];
      }
    }
    return max;
}

void countSort(int a[], int n, int k)
{
    int countArray[k+1], i; //Counting array
    int resArray[n];  // resulting array

    // initialise count of all elements to 0
    for(i=0; i<=k; ++i)
    {
        countArray[i]=0;
    }

    // count of each element
    for(i=0; i<n; i++)
    {
        countArray[a[i]]++;
    }
    // cumulative count of each array
    for(i=1; i<=k; i++)
    {
        countArray[i] += countArray[i-1];
    }
    for(i=n-1; i>=0; i--)
    {
        resArray[countArray[a[i]]-1] = a[i];
        countArray[a[i]]--;
    }
    for(i=0; i<n; i++)
    {
        a[i]=resArray[i];
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
    int k = findMax(a, n);
    //cout<<k<<endl;
    countSort(a, n, k);
    display(a, n);
}