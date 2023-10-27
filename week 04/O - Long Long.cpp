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
      int n;  cin >> n;
      ll sum = 0;
      int a[n];
      for(int i=0; i<n ; i++)
      {
          cin >> a[i];
          sum += abs(a[i]);
      }
      int ans = 0,k=0;
      for(int i=0; i<n; )
      {
         if(a[i] < 0 )
         {
             ans++;
             while(a[i] <= 0) i++;
         }
         else i++;
      }

      cout<<sum<<" "<<ans<<endl;
   }

   return 0;
}
