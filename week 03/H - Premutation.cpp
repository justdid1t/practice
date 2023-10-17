#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define pb push_back

int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       vector<ll> adj[n];
       for(int i=0; i<n; i++)
       {
           for(int j=0; j<n-1; j++)
           {
               ll x; cin>>x;
               adj[i].pb(x);
           }
       }

       ll first;
       ll a = adj[0][0]; ll b = adj[1][0]; ll c = adj[2][0];
       if(a==b || a==c) first = a;
       else first = b;

       cout<<first<<" ";
       bool f = false;
       for(int i=0; i<n; i++)
       {
           for(ll val: adj[i])
           {
               if(first == val) break;
                f = true;
               cout<<val<<" ";
           }
           if(f) { cout<<endl; break;}
       }
    }
    return 0;
}

