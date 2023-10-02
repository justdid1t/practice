#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define mx  INT_MAX;

int main()
{
    ll n; cin>>n;
    ll arr[n];
    ll sum = 0;
    ll minodd = mx;

    ll odd = 0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum += arr[i];
        if(arr[i]%2 != 0)
        {
            odd++;
            minodd = min(minodd,arr[i]);
        }
    }

    if(odd%2 != 0) sum -= minodd;

     cout<<sum<<endl;

    return 0;
}

