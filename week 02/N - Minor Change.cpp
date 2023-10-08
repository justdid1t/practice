#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    string s,t;
    cin>>s>>t;
    int cnt =0;

    for(int i=0;i<s.size(); i++)
    {
        if(s[i] != t[i]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

