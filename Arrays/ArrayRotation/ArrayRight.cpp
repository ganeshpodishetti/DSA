#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    k%=n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int temp[n];
    for(int i=n-1; i>=0; i--){
        temp[i] = a[(i-k+n)%n];
    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}