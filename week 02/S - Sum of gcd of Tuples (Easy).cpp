#include<bits/stdc++.h>
#include <numeric>#include <numeric>
//#include <numeric>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n;
    cin>>n;
    ll sum = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n ; j++)
        {
            for(int k=1; k<=n ; k++)
            {
               sum += __gcd(__gcd(i,j),k);
            }
        }
    }
    cout<<sum<<endl;

    return 0;
}

