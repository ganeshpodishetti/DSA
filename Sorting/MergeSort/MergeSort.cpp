#include <bits/stdc++.h>
using namespace std;

// merging arrays
void Merge(int a[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i] = a[l+i];
    for(int i=0; i<n2; i++)
        right[i] = a[m+i+1];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]) // increasing order
        /*
            decreasing order
            left[i]>=right[j]
        */
          a[k++] = left[i++];
        else 
          a[k++] = right[j++];
    }
    while(i<n1)
       a[k++] = left[i++];
    while(j<n2)
       a[k++] = right[j++];

}

void MergeSort(int a[], int l, int r)
{
    if(l<r){
      int m = l + (r-l)/2;
      // left array
      MergeSort(a, l, m);
      // right array
      MergeSort(a, m+1, r);
      // merge
      Merge(a, l, m, r);
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
    MergeSort(a, 0, n-1);
    display(a, n);
}