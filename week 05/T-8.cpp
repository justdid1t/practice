#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

bool valid(ll a[],ll n,ll m,ll mid)
{
    ll cnt = 0;

    for(int i=0; i<n; i++)
    {
       if(a[i] > mid) {cnt += a[i]-mid;}
    }
    if(cnt >= m) return true;
    else return false;
}

int main()
{
   ll n , m;  cin >> n >> m;

   ll a[n];
   for(int i=0; i<n; i++) cin >> a[i];

   ll l=0, r = 1e10;
   ll ans;
   while(l <= r)
   {
       ll mid = l + (r-l)/2;

       if(valid(a,n,m,mid))
       {
           ans = mid;
           l = mid+1;
       }
       else{
          r = mid - 1;
       }
   }

   cout<<ans<<endl;

   return 0;
}
