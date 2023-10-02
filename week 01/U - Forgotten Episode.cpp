#include<bits/stdc++.h>
using namespace std;

int f[100001];

int main()
{
    int n,v; cin>>n;
    for(int i=0; i<n-1; i++)
    {
        cin>>v;
        f[v]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(f[i] == 0) {cout<<i<<endl; break;}
    }

    return 0;
}

