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
      int a[n];
      for(int i=0; i<n; i++)
                       cin >> a[i];

      sort(a,a+n);

      int mx = a[0]+a[n-1]+1, ans = 0;
      while(mx--)
      {
          int i=0, j = n-1, cnt  = 0;
          while(i<j)
          {
              int w = a[i]+a[j];
             if(w == mx)
             {
                 cnt++;
                 i++; j--;
             }
             else if(w > mx)
             {
                j--;
             }
             else i++;
          }
          ans = max(ans,cnt);
      }
      cout<<ans<<endl;
   }

   return 0;
}
