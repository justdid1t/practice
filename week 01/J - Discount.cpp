#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    long double buy,sell;
    cin>>buy>>sell;
    long double d = buy-sell;

    long double ans = (d/buy)*100.0;
    printf("%.20Lf\n",ans);
    return 0;
}

