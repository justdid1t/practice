#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      string s;  cin >> s;
      stack<char> st;

      for(int i=0; i<s.size(); i++)
      {
          if(s[i] == 'B')
          {
              if(!st.empty())
                          st.pop();
              else
                  st.push(s[i]);
          }

          else
              st.push(s[i]);
      }
      cout<<st.size()<<endl;
   }

   return 0;
}
