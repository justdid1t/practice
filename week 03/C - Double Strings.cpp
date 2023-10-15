#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int> mp;
        vector<string> v;
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            string s; cin>>s;
            v.push_back(s);
            mp[s]++;
        }

        for(int i=0; i<n; i++)
        {
            string s1 = v[i];
            string s2 ="" ;
            bool found = false;
            for(int j=0; j<v[i].size()-1; j++)
            {
               s2 += s1[s1.size()-1];
               s1.pop_back();
               string tmp = s2;
               reverse(tmp.begin(),tmp.end());
               if(mp[s1] >=1 && mp[tmp]>=1 ) {
                   found = true;
                   break;
               }
            }
            if(found) ans.push_back(1);
            else ans.push_back(0);
        }
            for(int x: ans)
            {
                cout<<x;
            }
            cout<<endl;
    }
    return 0;
}

