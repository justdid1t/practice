#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n;  cin >> n;
    vector<int> v(n),ans;
    for(int i=0; i<n; i++)  cin >> v[i];

    sort(v.begin(),v.end());

    int p1 = 0, p2 = n-1;
    int cnt  = 0;
    while(abs(p1-p2)>1)
    {
      if(v[p1]<v[p2] && v[p1]<v[p2-1])
      {
        if(cnt < 1)
        {
          ans.pb(v[p2]);
          ans.pb(v[p1]);
          ans.pb(v[p2-1]);
        }
        else
        {
          ans.pb(v[p1]);
          ans.pb(v[p2-1]);
        }
        cnt++;
      }
      p1++; p2--;
    }

    cout<<cnt<<endl;
    reverse(ans.begin(),ans.end());
    if(ans.size() != 0){
     for(auto x: ans)
     {
        cout<<x<<" ";
     }
    }
    else
    {
      for(auto x: v)
      {
        cout<<x<<" ";
      }
    }
    cout<<endl;
    return 0;
}
