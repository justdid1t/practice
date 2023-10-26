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
      ll cnt = 0; //number of 2's multiple present of the array

      for(int i=0; i<n ; i++)
      {
          int v;  cin >> v;

          while(v%2==0)
          {
              cnt++;
              v /= 2;
          }
      }

      if(cnt >= n) cout<<0<<endl;
      else
      {
          ll need = n - cnt;
          vector<int> v;
          for(int i=2; i<=n ; i++)
          {
              ll x = 0; //number of 2's multiple present on indices
              int tmp = i;
              while(tmp%2 == 0)
              {
                  x++;
                  tmp /= 2;
              }
              v.pb(x);
          }

          sort(v.begin(),v.end());
          int ans = 0;
          for(int i=v.size()-1; i>=0; i--)
          {
              ans++;
              need -= v[i];
              if(need <= 0) break;
          }

          if(need <= 0) cout<<ans<<endl;
          else cout<<-1<<endl;
      }
   }

   return 0;
}
