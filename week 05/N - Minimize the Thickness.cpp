#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

ll solve(ll a[],ll n, ll i,ll ts)
{
   ll sum = 0;
   ll cnt = 0, mxseg = i;
   for(i; i<n; i++)
   {
      sum += a[i];

      if(sum > ts) return n;
      cnt++;
      if(sum == ts) {mxseg = max(mxseg,cnt); cnt = 0; sum = 0; }

   }
   if(mxseg == 0 || sum != 0) return n;
   return mxseg;
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      ll n;  cin >> n;
      ll a[n];

      for(int i=0; i<n; i++) cin >> a[i];

      ll ts = 0;
      vector<ll> ans;
      for(int i=0 ;i<n; i++)
      {
         ts += a[i];

         ll pa = solve(a,n,i+1,ts);
         ans.pb(pa);
      }

      //cout<<ans.size();
      for(int x: ans)
      {
        //cout<<x<<" ";
      }
      sort(ans.begin(),ans.end());
      cout<<ans[0]<<endl;

   }

   return 0;
}

