#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n;  cin >> n;
   while(n--)
   {
      string s,t;
      cin >> s >> t;

      bool f = true;
      int cnt = 0;
      if(t[0] != s[0]) f = false;
      if(t.size() < s.size()) f = false;
      for(int i=1; i<t.size(); i++)
      {
          if( (i<s.size() && t[i]==s[i-cnt])) continue;
          else if(t[i]==t[i-1]) {cnt++; continue; }
          else {f = false; break; }
      }
      if(f) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      cout<<endl;
   }

   return 0;
}
