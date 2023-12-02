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
      int a = n-1, b = 1, c = 0;

      while(a>b && b>c)
      {
          a -= 2;
          b++; c++;
      }
      a += 2; b--; c--;

      while(abs(a-b) > 2)
      {
          a--; b++;
      }
      cout<<b<<" "<<a<<" "<<c<<endl;
   }

   return 0;
}
