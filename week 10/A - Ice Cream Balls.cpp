#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const ll N = 1e9;
const int mod = 1e9+7;

void solve()
{

    ll n; cin>>n;

    ll l=1,h=1e10,ans=1;
    while(l<=h){
        ll mid=(l+h)/2;

        ll k=(mid*(mid-1)/2);

        if(k<=n) ans=max(ans,mid),l=mid+1;
        else h=mid-1;
    }

    ll k=ans*(ans-1)/2;
    cout<<ans+(n-k)<<endl;

}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      solve();
   }
   return 0;
}
