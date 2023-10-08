#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n,k; cin>>n>>k;
    int cnt = 0;

    while(n>0)
    {
        n /= k;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

