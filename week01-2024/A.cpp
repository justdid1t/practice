#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n,m;  cin >> n >> m;

   int a[n],b[m];
   for(int i=0; i<n; i++) cin >> a[i];
      for(int i=0; i<m; i++) cin >> b[i];

      int p1 = 0, p2 = 0;
      vector<int> ans;
      while(1)
      {
          if(a[p1]<b[p2])
          {
              ans.pb(a[p1]);
              p1++;
          }
          else
          {
              ans.pb(b[p2]);
              p2++;
          }

          if(p1==n)
          {
              while(p2<m)
              {
                  ans.pb(b[p2]); p2++;
              }
              break;
          }
          if(p2 == m)
          {
              while(p1<n)
              {
                  ans.pb(a[p1]); p1++;
              }
              break;
          }
      }

      for(auto x: ans)
      {
          cout<<x<<" ";
      }
      cout<<endl;



   return 0;
}
