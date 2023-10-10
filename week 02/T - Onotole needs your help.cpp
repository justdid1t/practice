#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 1e9+1;


int main()
{
    int n; cin>>n;
    int a[n];

    int f[N];
    for(int i=0; i<n ; i++)
    {
       cin>>a[i];
       f[a[i]] = 0;
    }
    for(int i=0; i<n;  i++)
    {
        f[a[i]]++ ;
    }
    for(int i=0; i<n;  i++)
    {
        if(f[a[i]] == 1) {cout<<i<<endl; break;}
    }

    return 0;
}

