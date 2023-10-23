#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7

int main()
{
    int t;  cin>> t;
    while(t--)
    {
        ll n,q;  cin >> n >> q;

        ll a[n],sum = 0, eve = 0, odd = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 == 0) eve++;
            else odd++;
        }

        while(q--)
        {
            int a,b;  cin >> a >> b;

            if(a == 0)
            {
                sum += eve*b;
                if(b%2 != 0) { odd += eve; eve = 0; }
            }
            else
            {
                sum += odd*b;
                if(b%2 != 0) { eve += odd; odd = 0; }
            }

            cout<<sum<<endl;
        }
    }
    return 0;
}

