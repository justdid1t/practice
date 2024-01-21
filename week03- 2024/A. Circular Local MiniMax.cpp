
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
     int a[n];
     for(int i=0; i<n; i++) cin >> a[i];

     if(n%2==1) cout<<"NO"<<endl;
     else
     {
         sort(a,a+n);

         vector<int> l,h,ans;

         for(int i=0; i<n; i++)
         {
             if(i<n/2) l.pb(a[i]);
             else h.pb(a[i]);
         }

         int x=0,y = 0;
         for(int i=0; i<n; i++)
         {
             if(i%2)
             {
                 ans.pb(h[x]);
                 x++;
             }
             else
             {
                 ans.pb(l[y]);
                 y++;
             }
         }

         //final check
         bool f = true;
         for(int i=0; i<n-1; i++)
         {
             if(i==0)
             {
                 if(ans[i]<ans[i+1] && ans[i]<ans[n-1]) continue;
                 else f = false;
             }
             else
             {
                 if( (ans[i]>ans[i+1] && ans[i]>ans[i-1]) || (ans[i]<ans[i+1] && ans[i]<ans[i-1])  ) continue;
                 else f = false;
             }
         }

         if(f)
         {
             cout<<"YES"<<endl;
             for(auto x: ans)
             {
               cout<<x<<" ";
             }
             cout<<endl;
         }
         else cout<<"NO"<<endl;
     }
   }
   return 0;
}
