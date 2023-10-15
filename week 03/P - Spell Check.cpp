#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{

    int t; cin>>t;
    string nm = "Timur";
    sort(nm.begin(),nm.end());
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
         sort(s.begin(),s.end());

         if(nm == s) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    return 0;
}

