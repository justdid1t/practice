
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int k,s; cin>>k>>s;
    ll cnt =0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0; j<=k; j++)
        {
            int r = s- (i+j);
            if(r>=0 && r<=k) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

