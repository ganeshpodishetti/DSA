#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int x) // vector <int> a
{
  for(int i=0; i<n; i++)
  {
      if(a[i]==x)
        return i;
  }
  return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        int arr[n];  // vactor <int> arr {1, 2, 3, 4, 5}; -> dynamic memory allocation
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        int result = linearSearch(arr, n, x);
        if(result==-1)
           cout<<"Element is not found"<<endl;
        cout<<"Element is found at"<<" "<<result<<endl;
    }
}