#include <bits/stdc++.h>
using namespace std;

void linearSearch(int a[], int n, int x)
{
    int left = 0;
    int right = n-1;
    int position = -1;
    for(left=0; left<=right; )
    {
        if(a[left]==x){
            position=left;
            cout<<x<<" "<<"found at "<<position<<" with attempt "<<left+1<<endl;
            break;
        }

        if(a[right]==x){
            position=right;
            cout<<x<<" "<<"found at "<<position<<" with attempt "<<n-right<<endl;
            break;
        }
        left++;
        right--;
    }
    if(position==-1)
      cout<<"Not found"<<endl;
}

int main()
{
    int n, x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>x;
    linearSearch(a, n, x);
}