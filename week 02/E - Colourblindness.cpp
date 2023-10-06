#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s1,s2;
        for(int i=0; i<n; i++)
        {
            char c; cin>>c;
            if(c=='G' || c=='B') s1 += 'G';
            else s1 += c;
        }
        for(int i=0; i<n; i++)
        {
            char c; cin>>c;
            if(c=='G' || c=='B') s2 += 'G';
            else s2 += c;
        }

        if(s1 == s2) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

