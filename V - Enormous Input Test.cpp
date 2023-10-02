#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k; cin>>n>>k;
    int ti,cnt = 0;

    while(n--)
    {
       cin>>ti;
       if(ti % k == 0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

