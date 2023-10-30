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

       if( (n & 1 == 1) ) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }

   return 0;
}
