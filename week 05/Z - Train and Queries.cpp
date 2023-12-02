#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

vector<int> bs(vector<int> v, int n, int target)
{
    vector<int> pos;

    int l = 0, r = n-1;
    while(l <= r) // first occurance
    {
       int mid = l + (r-l)/2;

       if(v[mid].second == target)
       {
           pos.pb(v[mid].first);

       }
    }
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int n,q;  cin >> n >> q;
      vector<pair<int,int>> v;

      for(int i=0; i<n; i++)
      {
          int x; cin >> x;
          v.pb(x,i);
      }
      sort(v.begin(),v.end());
   }

   return 0;
}
