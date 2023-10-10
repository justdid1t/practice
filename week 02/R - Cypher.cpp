#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n; cin>>n;
    int enc[n];
    for(int i=0; i<n ; i++)  cin>>enc[i];

    for(int i=0; i<n ; i++)
    {
        int sz; cin>>sz;
        string s; cin>>s;
        for(char c: s)
        {
            if(c == 'U') {
                if(enc[i] == 0) enc[i] = 9;
                else enc[i]--;
            }
            if(c ==  'D') {
                if(enc[i] == 9) enc[i] = 0;
                else enc[i]++;
            }
        }

        for(int i=0; i<n ; i++) cout<<enc[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

