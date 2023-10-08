
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    string target = "yes";
    while(t--)
    {
        string s; cin>>s;
        for(char &c : s)
        {
            c = tolower(c);
        }
        if(s == target) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
