#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
      string s; cin >> s;
      int ans = INT_MAX;
      for(int i=0; i<s.size(); i++)
      {
        int a = 0, b = 0, c = 0;
        if(s[i]=='a')
        {
          int j = i, sz = 0;
          while(j<s.size())
          {
            sz++;
            if(s[j] == 'a') a++;
            else if(s[j]=='b') b++;
            else c++;

            if(sz>1 && a>b && a>c)
            {
              ans = min(ans,j-i);
              break;
            }

            j++;
          }
        }
      }

      if(ans != INT_MAX) cout<<ans+1<<endl;
      else cout<<-1<<endl;
    }
    return 0;
}
