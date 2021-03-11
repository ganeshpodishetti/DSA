#include <bits/stdc++.h>
using namespace std;

void linearSearch(int a[], int n, int x)
{
    int index = -1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
          index = i;
    }
    if(index == -1)
       cout<<x<<" "<<" not found"<<endl;
    cout<<x<<" "<<"found at index "<<index<<endl;
}

int main()
{
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    linearSearch(arr, n, x);
}