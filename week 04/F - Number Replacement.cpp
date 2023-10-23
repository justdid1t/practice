#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        string s;   cin>>s;

        bool ans = true;

        for(int i=0; i<n; i++)
        {
            char expected = s[i];
            int x = a[i];
            for(int j=i+1; j<n; j++)
            {
                if(a[j] == x  && s[j] != expected)
                {
                    ans = false;
                    break;
                }
                if(!ans) break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

