#include <bits/stdc++.h>
using namespace std;

void BinarySearch(int a[], int n, int x)
{
  int left = a[0];
  int right = a[n-1];
  while (left<=right)
  {
      /* code */
      int mid = left + (right-left)/2;
      if(a[mid]==x){
        cout<<x<<" "<<"Fount at"<<" "<<mid<<endl;
        break;
      } else if(a[mid]<x){
          left = mid + 1;
      } else {
          right = mid - 1;
      }
  }
  //cout<<x<<" "<<"not found"<<endl; 
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    BinarySearch(arr, n, x);
}