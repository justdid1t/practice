#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1e6+10;

int main()
{
  ll t;  cin >> t;
  while(t--)
  {
    ll n;  cin >> n;
    vector<ll> v(n);

    for(int i=0; i<n; i++)  cin >> v[i];
    ll cnt = 0, indx = 1, ans = 0;
    for(int i=0; i<n; )
    {

        while(i<n && v[i]>=indx)
        {
            cnt++;
            indx++;
            i++;
        }

        indx = 1;
        ans += (cnt*(cnt+1))/2;
        cnt  = 0;
    }

    cout<<ans<<endl<<endl;
  }

  return 0;
}
