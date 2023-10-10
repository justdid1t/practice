#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ll n; cin>>n;
    ll a[n],s[n];

    ll pres1[n];
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        a[i] = x; s[i] = x;

        if(i==0) pres1[i] = x;
        else pres1[i] = x + pres1[i-1];
    }

    sort(s,s+n);
    ll pres2[n];

    for(int i=0; i<n; i++)
    {
        if(i==0) pres2[i] = s[i];
        else pres2[i] = s[i] + pres2[i-1];
    }

    int q; cin>>q;
    while(q--)
    {
       int type; cin>>type;
       int a,b; cin>>a>>b;

       if(type == 1) //unsorted
       {
          if(a-1 > 0) cout<<pres1[b-1] - pres1[a-2]<<endl;
          else cout<<pres1[b-1]<<endl;
       }
       else{

          if(a-1 > 0) cout<<pres2[b-1] - pres2[a-2]<<endl;
          else cout<<pres2[b-1]<<endl;
       }
    }

    return 0;
}

