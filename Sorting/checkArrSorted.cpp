#include <bits/stdc++.h>
using namespace std;

bool checkSort(int a[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i-1]>a[i])
          return false;
    }
    return true;
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
   if(checkSort(a, n))
      cout<<"sorted"<<endl;
   else cout<<"Not"<<endl;
}