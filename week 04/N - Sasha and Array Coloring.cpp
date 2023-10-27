#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int n;  cin >> n;
      int a[n];

      for(int i=0; i<n; i++) cin >> a[i];

      sort(a,a+n);
      int sum = 0;
      for(int i=0,j=n-1; i<j; i++)
      {
         sum += a[j]-a[i];
         j--;
      }
      cout<<sum<<endl;
   }

   return 0;
}
