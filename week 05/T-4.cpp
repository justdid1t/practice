#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;
const ll mx = 1e15;

bool valid(ll a[],ll n,ll c,ll mid)
{
   ll cnt = 1;
   ll sum = 0;
   for(int i=0; i<n; i++ )
   {

       if(a[i] > mid) return false;
       sum += a[i];
       if(sum > mid) { cnt++; sum = a[i]; }
   }

   if(cnt <= c) return true;
   else return false;
}

int main()
{
   ll n , c;
   while(cin >> n && cin >> c)
   {
      ll a[n];
      for(int i=0; i<n; i++) cin >> a[i];

      ll l = 0, r = mx;
      ll ans;
      while(l <= r)
      {
          ll mid = l + (r-l)/2;

          if(valid(a,n,c,mid))
          {
             ans = mid;
             r = mid -1;
          }
          else
          {
             l = mid + 1;
          }
      }
      cout<<ans<<endl;
   }

   return 0;
}
