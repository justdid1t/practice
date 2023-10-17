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
        string x; cin>>x;
        string s;

        for(char& c: x)
        {
           c = tolower(c);
        }
        s += x[0];
        for(int i=1; i<n; i++)
        {
           if(x[i] == x[i-1]) continue;
           s += x[i];
        }
        if(s == "meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

