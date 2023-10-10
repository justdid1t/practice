#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int count_dif(string a, string b)
{
    int cnt = 0;
    for(int i=0; i<a.size(); i++)
    {
       if(a[i] == b[i]) continue;

       if(a[i] > b[i])
       {
          int x = a[i]-b[i];
          cnt += x;
       }
       else
       {
           int x = b[i]-a[i];
           cnt += x;
       }
    }
    return cnt;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int w,l; cin>>w>>l;
        vector<string> v;

        for(int i=0; i<w; i++)
        {
            string s; cin>>s;
            v.push_back(s);
        }

        vector<int> ans;
        for(int i=0; i<w; i++)
        {
            for(int j=i+1; j<w; j++)
            {
                ans.push_back(count_dif(v[i],v[j]));
            }
        }

        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
    return 0;
}

