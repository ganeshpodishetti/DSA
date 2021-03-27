#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    // hash to store the frequency of characters
    int hash[26]={0};
    for(int i=0; i<s.length(); i++){
        // s[i]-97 returns the index for the character
        hash[s[i]-97] += 1;
    }
    char ch;
    for(int i=0; i<26; i++){
        
        // making character required
        ch=i+97;
        while(hash[i])
        {
            cout<<ch;
            hash[i]-=1;
        }
        
    }
    return 0;
}