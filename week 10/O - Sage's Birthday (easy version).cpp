#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n;  cin >> n;
   int total;
   if(n%2) total = n /2 ;
   else total = (n-1)/2;

   vector<int> v(n);
   for(int i=0; i<n; i++)  { cin >> v[i]; }

   sort(v.begin(),v.end());

   cout<<total<<endl;
   for(int i=0; i<n-2; i+=2)
   {
       int tmp = v[i];
       v[i] = v[i+1];
       v[i+1] = tmp;
   }

   for(auto x: v)
   {
       cout<<x<<" ";
   }

   cout<<endl;

   return 0;
}
