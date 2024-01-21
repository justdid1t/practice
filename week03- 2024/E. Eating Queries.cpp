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
     int n,q;  cin>> n >> q;
     ll arr[n];
     for(int i=0; i<n; i++)  cin >> arr[i];

     sort(arr,arr+n);

     vector<ll>preS(n);
     for(int i=n-1,j=0; i>=0; i--)
     {
         if(i==n-1)
              preS[j] = arr[i];

         else
            preS[j] = preS[j-1]+arr[i];

         j++;
     }


     while(q--)
     {
          int x;  cin >> x;

          auto it = lower_bound(preS.begin(),preS.end(),x);
          if( it==preS.end() ) cout<<-1<<endl;
          else  cout<<(it-preS.begin())+1<<endl;
     }

   }
   return 0;
}
