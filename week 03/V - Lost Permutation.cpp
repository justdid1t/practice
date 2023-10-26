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
      int n,s;  cin >> n >> s;

      int f[51];
      for(int i=0; i<51; i++) f[i] = 0;
      int mx = 0;
      for(int i=0; i<n ; i++)
      {
          int x; cin >> x;

          mx = max(mx,x);
          f[x]++;
      }
      int need = 0;
      for(int i=1; i<=mx; i++)
      {
         if(f[i] == 0) need += i;
      }

      //cout<<s<<" "<<need<<endl;

      if(need > s) cout<<"NO"<<endl;
      else if(need == s) cout<<"YES"<<endl;
      else
      {
          bool f = false;

          s -= need;
          for(int i=mx+1;  ; i++)
          {
              s -= i;
              if(s == 0) {f = true; break;}
              if(s < 0) break;
          }

          if(f) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
      }

   }

   return 0;
}
