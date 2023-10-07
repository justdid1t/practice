#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_prime(int n)
{
    for(int i=1; i*i<=n; i++)
    {
        if(i==1 || i==n) continue;
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin>>n;
    int cnt = 0;
    for(int i=2; i<=n; i++)
    {
        int pd = 0; //prime diviors
        for(int j=2; j<=i; j++)
        {
            if(is_prime(j)== true && i%j==0) pd++;
        }
        if(pd == 2) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

