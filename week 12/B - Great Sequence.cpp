
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
      ll n,x,v;  cin >> n >> x;
      map<ll,ll>mp;
      int a[n];
      for(int i=0; i<n; i++)
      {
          cin >> v;
          mp[v]++;
          a[i] = v;
      }
      sort(a,a+n);

      int cnt = 0;
      for(int i=0; i<n; i++)
      {

         if(mp[a[i]]>0)
         {
           ll target = a[i]*x;
           if(mp[target]>0)
           {
             mp[target]--;
             mp[a[i]]--;
           }
           else { cnt++; mp[a[i]]--; }
         }

      }
     cout<<cnt<<endl;
   }

   return 0;
}
