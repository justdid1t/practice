#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        map<string,int>mp;
        int cnt  = n-1;

        for(int i=0; i<n-2; i++)
        {
           if(s[i] == s[i+2]) cnt--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

