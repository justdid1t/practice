#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int longest_seq(int a[],int crnt,int n,int d)
{
  int cnt = 0;
  map<int,int>mp;
  for(int i = crnt ; i <crnt+d; i++)
  {
    mp[a[i]]++;
  }
  vector<int> v;
  for(auto x: mp)
  {
    v.pb(x.second);
  }
  sort(v.begin(),v.end());
  int sz = v.size()-1;
  while(d>0)
  {
    d -= v[sz];
    sz--;
    cnt++;
  }
  return cnt;
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int n,k,d,ans = N;  cin >> n >> k >> d;

      int a[n];
      for(int i=0; i<n; i++) cin >> a[i];

      for(int i=0; i<=n-d; i++)
      {
        int x = longest_seq(a,i,n,d);
         ans = min(ans,x);
      }
      cout<<ans<<endl;
      cout<<endl;
   }

   return 0;
}
