#include<bits/stdc++.h>
using namespace std;

vector<string> adj[3];

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        map<string,int> mp;
        for(int i=0; i<3; i++)
        {
            for(int j=1; j<=n; j++)
            {
                string s; cin>>s;
                adj[i].push_back(s);
                mp[s]++;
            }
        }

        for(int i=0; i<3; i++)
        {
            int cnt = 0;
            for(string st: adj[i])
            {
                if(mp[st] == 2) cnt += 1;
                else if(mp[st] == 1) cnt += 3;
            }
           cout<<cnt<<" ";
           adj[i].clear();
        }
        cout<<endl;

    }

    return 0;
}



