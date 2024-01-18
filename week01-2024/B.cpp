#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n,m;  cin >> n >> m;

   int a[n],b[m];
   for(int i=0; i<n; i++) cin >> a[i];
   for(int i=0; i<m; i++) cin >> b[i];

   int i = 0;

   for(int j=0; j<m; j++)
   {
       while(i<n && a[i]<b[j])
       {
           i++;
       }
       cout<<i<<" ";
   }
   cout<<endl;

   return 0;
}
