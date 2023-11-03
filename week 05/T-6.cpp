#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;
const int mx = INT_MAX;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      ll n; cin >> n;
      ll a[n];
      for(int i=0; i<n; i++)  cin >> a[i];

      ll l=1, r = mx;
      bool f = false;
      while(l <= r)
      {
         ll mid = l + (r-l)/2;
         double ans = 1.0;

         for(int i=0; i<n; i++)
         {
            ans *= (double)a[i]/(double)mid;
         }

         if( abs(1.0 - ans) < 1e-15 )
         {
             f = true;
             break;
         }
         else if(ans > 1)
         {
            l = mid + 1;
         }

         else r = mid -1;
      }

      if(f) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

   }

   return 0;
}
