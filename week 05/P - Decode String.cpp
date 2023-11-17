#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;

   vector<char> alpha;
   for(char i = 'a'; i<='z'; i++)
   {
      alpha.pb(i);
   }

   while(t--)
   {
      int n;  cin >> n;
      string s;  cin >> s;
      string ans;
      for(int i=s.length()-1; i>=0; i--)
      {

         if(s[i] == '0')
         {
            string x;
            x += s[i-2];
            x += s[i-1];
            i -= 2;

            if (!x.empty()) {
               int num = stoi(x);
               ans += alpha[num-1];
            }
         }

         else
         {
             string x;
             x += s[i];
             if (!x.empty()) {
                int num = stoi(x);
                ans += alpha[num-1];
             }
         }

      }
      reverse(ans.begin(),ans.end());
      cout << ans << endl;
   }

   return 0;
}
