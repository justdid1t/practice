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
      int n,v;  cin >> n;
      int even = 0, odd = 0, tmp, oddcnt = 0,evecnt = 0;
      for(int i=0; i<n; i++)
      {
          cin >> v;
          if(v%2==0) {even += v; evecnt = 1;}
          else
          {
             odd += v;
             oddcnt++;
          }
          if(oddcnt < 2 && evecnt == 0) cout<<even+odd<<" ";
          else if(oddcnt%2 == 0)
          {
              cout<<even+odd<<" ";
          }
          else
          {
              cout<<even+odd-1<<" ";
          }
      }
      cout<<endl;
   }

   return 0;
}
