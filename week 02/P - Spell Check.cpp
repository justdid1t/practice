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
        int n; cin>>n;
        string name ="Timur";
        string s; cin>>s;
        sort(name.begin(),name.end());
        sort(s.begin(),s.end());
        if(name == s) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

