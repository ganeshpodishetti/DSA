#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    while(l<=r) // while(r>=l)
    {
      int mid = l + (r-l)/2;
      if(a[mid]==x)
      {
          return mid;
      } else if(a[mid]<x) {
          return (a, mid+1, r, x);
      } else {
          return (a, l, mid-1, x);
      }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    int res = binarySearch(a, 0, n-1, x);
    (res == -1) ? cout<<"not found"<<endl : cout<<x<<" "<<"found at "<<res<<endl;

    return 0;
}
