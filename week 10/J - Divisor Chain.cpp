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
      int x;  cin >> x;

      int l = log2(x);

      int n = pow(2,l); // in 2^n form

      int dif = x - n;

      vector<int> pos; //contains set bits positions of dif
      vector<int> ans;
      int i = 0;
      while(dif > 0)
      {
          if(dif&1) pos.pb(i);
          i++;
          dif = dif >> 1;
      }

      ans.pb(x);
      for(auto v: pos)
      {
          ans.pb(x - pow(2,v));
          x -= pow(2,v);
      }
      int y = 0;
      while(n > 1)
      {
          n /= 2;
         ans.pb(n);
      }

      cout<<ans.size()<<endl;
      for(auto x: ans)
      {
          cout<<x<<" ";
      }
      cout<<endl;

   }

   return 0;
}
