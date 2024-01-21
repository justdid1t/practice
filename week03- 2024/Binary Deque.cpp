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
      int n,s,ts = 0;  cin >> n >> s;
      int arr[n];

      for(int i=0; i<n; i++){
                cin >> arr[i];
            ts += arr[i];
      }


      if(ts<s) cout<<-1<<endl;
      else
      {
          vector<int> ans;
          int l=0, r=0,sum = 0;

          for( ; r<n; r++)
          {
            sum += arr[r];
            while(sum > s)
            {
                sum -= arr[l];
                l++;
            }
            ans.pb(abs(0-l)+abs(n-r-1));
          }

         sort(ans.begin(),ans.end());
         cout<<ans[0]<<endl;
      }
   }

   return 0;
}
