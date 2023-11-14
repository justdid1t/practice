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
      int pre[n];
      int sum = 0;
      for(int i=0; i<n; i++)
      {
        int x;  cin >> x;
        sum += x;
        pre[i] = sum;
      }

      for(int i=0 ;i<n; i++)
      {

      }

   }

   return 0;
}
