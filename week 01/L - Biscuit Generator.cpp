#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin>>a>>b;
    int t; cin>>t;

    //t += 0.5;
    int ans = 0;

    for(int i=a; i<=t; )
    {
        ans = ans + b;
        i +=  a;
    }

    cout<<ans<<endl;
    return 0;
}

