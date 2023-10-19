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
        map<string,int> mp;
        int cnt = 0;
        for(int i=0; i<n-1; i++)
        {
            string tmp;
            tmp += s[i];
            tmp += s[i+1];
            mp[tmp]++;
            if(mp[tmp]==1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

