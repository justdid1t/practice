#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int n;  cin >> n;

      priority_queue<ll> pq;
      ll ans  = 0;
      ll v;
      for(int i=0; i<n ; i++)
      {
          cin >> v;
          if(v > 0) pq.push(v);
          else if(v == 0)
          {
              if(!pq.empty()) { ans += pq.top(); pq.pop(); }
          }
      }
      cout<<ans<<endl;
   }

   return 0;
}

