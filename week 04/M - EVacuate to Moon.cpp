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
      ll n,m,h;  cin >> n >> m >> h;

      ll car[n];
      for(int i=0; i<n; i++) cin >> car[i];

      ll outlet[m];
      for(int i=0; i<m; i++)  cin >> outlet[i];

      sort(car, car + n, [](int a, int b){
        return a > b;
       });
      sort(outlet,outlet+m, [](int a, int b) {return a>b;});

      ll ans = 0;
      for(int i=0,j=0; i<n && j<m; i++,j++)
      {
         ans += min(car[i],outlet[j]*h);
      }
      cout<<ans<<endl;

   }

   return 0;
}
