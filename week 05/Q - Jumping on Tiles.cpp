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
      string s; cin >> s;
      int n = s.size();

      char f = min(s[0],s[n-1]);
      char l = max(s[0],s[n-1]);

      vector<char> v;
      for(int i=1; i<n-1; i++)
      {
          if(s[i]>=f && s[i]<=l) v.pb(s[i]);
      }
      sort(v.begin(),v.end());

      //string with index
      vector<pair<char,int>> vi;
      for(int i=1; i<n-1; i++)
      {
          vi.pb({s[i],i+1});
      }
      sort(vi.begin(),vi.end());

      vector<int> ans;
      for(int i=0; i<v.size(); i++)
      {
          ans.pb(vi[i].second);
      }

      if(f != s[0]) reverse(ans.begin(),ans.end());
      cout<<abs(f-l)<<" "<<ans.size()+2<<endl;
      cout<<1<<" ";
      for(auto x: ans)
      {
          cout<<x<<" ";
      }
      cout<<n<<" ";
      cout<<endl;
   }

   return 0;
}
