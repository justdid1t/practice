#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y; cin>>x>>y;

    if(x>y || x == y) cout<<0<<endl;
    else if( x == 1 ) cout<<y<<endl;
    else cout<<y-x+1<<endl;

    return 0;
}


