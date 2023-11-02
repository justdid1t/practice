#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

bool valid(int stall[],int n, int c,int dis)
{
   int prev = 0 , cnt = 1;
   for(int i=1; i<n; i++)
   {
      if(abs(stall[i]-stall[prev]) >= dis)
      {
           cnt++;
           prev = i;
      }
      if(cnt >= c) break;
   }

   if(cnt >= c) return true;
   else return false;
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int n,c;  cin >> n >> c;

      int stall[n];
      for(int i=0; i<n; i++) cin >> stall[i];

      sort(stall,stall+n);

      int l=0, r = INT_MAX;

      int ans;
      while(l <= r)
      {
          int mid = l + (r-l)/2;

          if(valid(stall,n,c,mid))
          {
              ans = mid;
              l = mid+1;
          }
          else
          {
            r = mid - 1;
          }
      }
      cout<<ans<<endl;
   }

   return 0;
}
