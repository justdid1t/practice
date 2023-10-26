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

       if(n == 3) cout<<-1<<endl;

       else
       {
           if( n%2 == 0)
           {
               for(int i=n; i>=1; i--)
               {
                   cout<<i<<" ";
               }
           }

           else
           {
               for(int i=n; i>n/2+1; i--)
               {
                   cout<<i<<" ";
               }
               int j =1;
               for(int i=n/2; i<n; i++)
               {
                   cout<<j<<" ";
                   j++;
               }
           }
           cout<<endl;
       }
   }

   return 0;
}
