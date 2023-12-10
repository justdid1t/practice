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

   queue<int> cheap,exp;

   for(int i=0; i<total; i++)
   {
       cheap.push(v[i]);
   }

   for(int i=0; i<total; i++) cheap.push(v[i]);

   for(int i=total; i<n; i++) exp.push(v[i]);

   cout<<total<<endl;
   if(cheap.size()==0)
   {
       for(auto x: v)
       {
           cout<<x<<" ";
       }
   }
   else{
   for(int i=0; i<n; i++)
   {
       if(i%2 == 0) {cout<<exp.front()<<" "; exp.pop(); }
       else
       {
           cout<<cheap.front()<<" ";
           cheap.pop();
       }
   }
   }

   cout<<endl;

   return 0;
}
