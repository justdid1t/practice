#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

ll fact(ll n)
{
    ll ans = 1;
    for(int i=2; i<=n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      ll n;  cin >> n;

      map<ll,ll> mp;

      for(int i=1; i<=n; i++)
      {
          ll x;  cin >> x;
          mp[x-i]++;
      }
      ll cnt = 0;
      for(auto x: mp)
      {
          ll f = x.second;
          if(f > 1)
          {
             cnt += (f*(f-1))/2;
          }
      }

      cout<<cnt<<endl;
   }

   return 0;
}
