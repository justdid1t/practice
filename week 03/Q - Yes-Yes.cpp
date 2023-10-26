#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      string s;  cin >> s;
      bool flag = true;
      for(int i=0; i<s.size(); i++)
      {
          if(i==0)
          {
              if(s[i]=='Y' || s[i]=='e' ||s[i]=='s') continue;
              else  { flag = false; break; }
          }
          else
          {
            if(s[i]=='Y' && s[i-1]=='s') continue;
            else if(s[i]=='s' && s[i-1]=='e') continue;
            else if(s[i]=='e' && s[i-1]=='Y') continue;
            else  { flag = false; break; }
          }
      }

      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }

   return 0;
}
