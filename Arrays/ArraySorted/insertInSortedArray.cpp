#include <bits/stdc++.h>
using namespace std;

void insert(int a[], int n, int k){
    int i = n-1;
    while(i>0 && a[i-1]>k){
        a[i] = a[i-1];
        i--;
    }
    a[i] = k;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    insert(a, n, k);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}