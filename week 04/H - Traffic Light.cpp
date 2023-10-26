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
      char c; cin >> c;
      string s;  cin >> s;

      vector<int> crnt;
      vector<int> green;
      for(int i=0; i<n; i++)
      {
         if(s[i] == c) crnt.pb(i+1);
         if(s[i] == 'g') green.pb(i+1);
      }

      int ans = 0;
      for(int x: crnt)
      {
          if(c == 'g') break;
          else if(x <= green[0]) ans = max(ans,green[0]-x);
          else if(x >= green[green.size()-1]) ans = max(ans, n-x+green[0]);
          else
          {
              for(int i=0; i<green.size(); i++)
              {
                  if(x <= green[i]) {ans = max(ans,green[i]-x); break;}
              }
          }
      }
      cout<<ans<<endl;
   }

   return 0;
}
