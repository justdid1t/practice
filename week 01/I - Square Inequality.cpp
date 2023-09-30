#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int a,b,c; cin>>a>>b>>c;

    if(a*a+b*b < c*c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

