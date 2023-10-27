#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      ll n;  cin >> n;

      if(n < 10) cout<<n<<endl;

      else{

         vector<ll> v;
         for(int i=9; i>=1; i--)
         {
            v.pb(i);
            n -= i;

            if(n <= i-1) {v.pb(n); break;}

         }
         reverse(v.begin(),v.end());

         for(ll x: v)
         {
             cout<<x;
         }
         cout<<endl;
      }
   }

   return 0;
}
