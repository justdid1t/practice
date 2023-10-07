#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int n; cin>>n;
    int pre_sum[n];

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(i==0) pre_sum[i] = x;
        else pre_sum[i] = x + pre_sum[i-1];
    }

    int q; cin>>q;
    while(q--)
    {
        int a,b; cin>>a>>b;
        if(a-1 >= 0) cout<<pre_sum[b]-pre_sum[a-1]<<endl;
        else cout<<pre_sum[b]<<endl;
    }
    return 0;
}

