#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        if(b>a) cnt++;
        if(c>a) cnt++;
        if(d>a) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}

