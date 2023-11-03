#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

ll digitSum(ll mid)
{
    ll sum = 0;

    while(mid > 0)
    {
        sum += (mid%10);
        mid /= 10;
    }
    return sum;
}

int main()
{
   ll n, s;  cin >> n >> s;

   ll l = 1, r = n;
   ll ans = -1;
   while(l <= r)
   {
       ll mid = l + (r-l)/2;
       if(abs(digitSum(mid)-mid) >= s)
       {
          ans = mid;
          r = mid - 1;
       }
       else
       {
          l = mid + 1;
       }
   }

   if(ans != -1)  cout<<n-ans+1<<endl;
   else cout<<0<<endl;

   return 0;
}
