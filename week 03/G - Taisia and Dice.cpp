#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,s,r; cin>>n>>s>>r;
        ll lost = s - r;

         cout<<lost<<" ";
         ll a[n-1];
         ll x = r/(n-1);
         ll rem = r % (n-1);
         for(int i=0; i<n-1; i++)
         {
             a[i] = x;
         }
         for(int i=0; i<rem; i++)
         {
             a[i]++;
         }
         for(int i=0; i<n-1; i++)
            cout<<a[i]<<" ";

         cout<<endl;

    }
    return 0;
}

