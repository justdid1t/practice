#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int n;  cin >> n;

   int two,three;
   if(n%2 == 0)
   {
       two = n / 2;
       three = 0;
   }
   else
   {
       three = 1;
       two = (n-3)/2;
   }

   cout<<two+three<<endl;

   while(two--)
   {
       cout<<2<<" ";
   }
   while(three--)
   {
       cout<<3<<" ";
   }
   cout<<endl;

   return 0;
}
