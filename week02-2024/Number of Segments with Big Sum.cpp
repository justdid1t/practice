#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   ll n,s;  cin >> n >> s;

   ll arr[n];
   for(int i=0; i<n; i++) cin >> arr[i];

   ll l = 0, sum = 0 ,cnt = 0;

   for(int r = 0; r<n; r++)
   {
       sum += arr[r];

       while(sum >= s && l<n)
       {
           cnt += (n-r);
           sum -= arr[l];
           l++;
       }
   }
   cout<<cnt<<endl;

   return 0;
}
