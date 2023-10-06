#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int f[N];

void setZero(int n)
{
    for(int i=1; i<=n; i++)
    {
        f[i] = 0;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];

        setZero(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            f[arr[i]]++;
        }
        int cnt = 0 ;
        for(int i=1; i<=n; i++)
        {
            if(f[i]>=3) {cout<<i<<endl; cnt++; break;}
        }
        if(cnt==0) cout<<-1<<endl;
    }
    return 0;
}

