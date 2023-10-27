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
      ll n;  cin >> n;

      ll sum = 1;
      while(n != 1)
      {
         sum += n;

         if(n%2==0) n /= 2;
         else n = (n-1)/2;
      }
      cout<<sum<<endl;
   }

   return 0;
}
