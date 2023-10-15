#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string pi = "3141592653589793238462643383279";
        string s; cin>>s;
        int cnt = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(pi[i] == s[i]) cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

