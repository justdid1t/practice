#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{

int n,q; cin >> n >> q;
int cse = 1;

while(n!=0 && q!=0)
{
   vector<int> v(n);
   for(int i=0; i<n; i++) cin >> v[i];

   sort(v.begin(),v.end());
   printf("CASE# %d:\n",cse);
   while(q--)
   {
       int x;  cin >> x;

       auto it = lower_bound(v.begin(),v.end(),x);
       int indx = (it != v.end() && *it == x) ? (it - v.begin()) + 1 : 0;

       if(indx != 0) printf("%d found at %d\n",x,indx);
       else printf("%d not found\n",x);
   }

   cin >> n >> q;
   cse++;
}
   return 0;
}
