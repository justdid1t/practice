#include<bits/stdc++.h>
using namespace std;

const int mx = 1e9+1;
typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int mini = mx;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            ans += arr[i]-mini;
        }
        cout<<ans<<endl;
    }
    return 0;
}

