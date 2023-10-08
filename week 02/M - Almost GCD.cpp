#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n; cin>>n;
    int a[n];
    int maxi = -1;
    for(int i=0; i<n ;i++)
    {
       cin>>a[i];
       if( a[i] > maxi ) maxi = a[i];
    }
    vector<pair<int,int>> v;
    for(int j=2; j<=maxi; j++)
    {
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%j == 0) cnt++;
        }
        v.push_back({cnt,j});
    }
    int ans,mx = 0;
    for(int i=0; i<v.size(); i++)
    {
      if(v[i].first > mx) {mx = v[i].first; ans = v[i].second;}
    }
    cout<<ans<<endl;

    return 0;
}

