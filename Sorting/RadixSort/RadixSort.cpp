#include <bits/stdc++.h>
using namespace std;

int Max(int a[], int n)
{
    int max = a[0];
    for(int i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];
    return max;
}

void countSort(int a[], int n, int k)
{
    int countArr[k+1];
    int resArr[n];

    for(int i=0; i<=k; ++i)
    {
        countArr[i]=0;
    }
    // Calucate count of each number
    for(int i=0; i<n; i++)
    {
        countArr[(a[i]/k)%10]++;
    }
    // Calucate cumukative count
    for(int i=1; i<k; i++)
    {
        countArr[i]+=countArr[i-1];
    }
    for(int i=n-1; i>=0; i--)
    {
        resArr[countArr[(a[i]/k)%10]-1] = a[i];
        countArr[(a[i]/k)%10]--;
    }
    for(int i=0; i<n; i++)
    {
        a[i] = resArr[i];
    }
}

void RadixSort(int a[], int n, int k)
{
    for(int i = 1; k/i>0; i *= 10){
        countSort(a, n, i);
    }
}

void display(int a[], int n)
{
    for(int i=0; i<n; i++)
       cout<<a[i]<<" ";
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
    // display(a, n);
    int k = Max(a, n);
    countSort(a, n, k);
    //RadixSort(a, n, k);
    display(a, n);
    return 0;
}