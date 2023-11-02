#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   ll n; cin >> n;
   vector<ll> a(n);
   for(int i=0; i<n; i++)  cin >> a[i];

   ll x;  cin >> x;
   ll q[n];
   for(int i=0; i<n; i++) cin >> q[i];

   for(int i=0; i<x; i++)
   {
       ll h = q[i];

       auto above = upper_bound(a.begin(),a.end(),h);

       auto below = above-1;
       while(*below == h && below != a.begin() ) below--;

       if(*below != h) cout<<*below<<" ";
       else cout<<"X ";

       if(above == a.end()) cout<<"X"<<endl;
       else cout<<*above<<endl;

   }


   return 0;
}
