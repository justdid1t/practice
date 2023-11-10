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
      int n;  cin>>n;

      if(n == 3) cout<<-1;

      else if(n%2==0)
      {
          for(int i=n; i>=1; i--)
          {
              cout<<i<<" ";
          }
      }
      else
      {
          for(int i=n; i>(n/2)+1 ; i--) cout<<i<<" ";

          int r = n - n/2;

          for(int i=1; i<=r; i++)cout<<i<<" ";
      }
      cout<<endl;
   }

   return 0;
}
