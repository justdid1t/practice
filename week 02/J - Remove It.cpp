#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n,x; cin>>n>>x;

    int val;
    for(int i=0; i<n ; i++)
    {
        cin>>val;
        if(val == x) continue;

        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

