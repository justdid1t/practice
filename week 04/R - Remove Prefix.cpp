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
      int n; cin >> n;

      int f[n+1];
      for(int i=0; i<=n; i++)
      {
          f[i] = 0;
      }

      int a[n];
      for(int i=0; i<n; i++)
      {
         cin >> a[i];
         f[a[i]]++;
      }

      int cnt = 0;
      int tmp = 0;
      for(int i=0; i<n; i++)
      {
          if(f[a[i]] == 1) tmp++;
          else if(f[a[i]] > 1)
          {
              cnt += 1+tmp;
              f[a[i]]--;
              tmp = 0;
          }
      }
      cout<<cnt<<endl;
   }

   return 0;
}
