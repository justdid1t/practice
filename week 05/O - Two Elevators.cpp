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
      int a,b,c;  cin >> a >> b >> c;

      int t1 = a, t2;
      if(c == 1) t2 = abs(b-c)+1;
      else t2 = abs(b-c)+abs(c-1)+1;

      if(t1 == t2) cout<<3<<endl;
      else if(t1 > t2) cout<<2<<endl;
      else cout<<1<<endl;
   }

   return 0;
}
