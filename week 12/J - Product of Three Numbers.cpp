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
      set<int> st;

      for(int i=2; i*i<=n; i++)
      {
          if(n%i == 0)
          {
              st.insert(i);
              n /= i;

              if(st.size()==2) {st.insert(n); break; }
          }
      }

      if(st.size() == 3)
      {
          cout<<"YES"<<endl;
          for(auto x: st)
          {
              cout<<x<<" ";
          }
          cout<<endl;

      }
      else cout<<"NO"<<endl;
   }

   return 0;
}
