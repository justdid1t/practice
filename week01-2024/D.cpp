#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n,s,ts = 0;  cin >> n >> s;

   int arr[n];
   for(int i=0; i<n; i++)
   {
       cin >> arr[i];
   }

   int i=0,j = 0 , ans = 0;

   for(int j =0; j<n; j++)
   {
      ts += arr[j];
      while(ts > s)
      {
        ts -= arr[i];
        i++;
      }
      ans =  max(ans,abs(i-j)+1);
      cout<<abs(i-j)+1<<endl;
   }
   //cout<<ans<<endl;

   return 0;
}
