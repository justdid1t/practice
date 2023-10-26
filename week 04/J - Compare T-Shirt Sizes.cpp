#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;

   map<char,int> mp;
   mp['S'] = 10;
   mp['M'] = 20;
   mp['L'] = 30;

   while(t--)
   {
      string a,b;  cin >> a >> b;

      int sz1 = a.size();
      int sz2 = b.size();

      if(a==b) cout<<"="<<endl;
      else if(a[sz1-1] != b[sz2-1] )
      {
          if(mp[a[sz1-1]] > mp[b[sz2-1]]) cout<<">"<<endl;
          else cout<<"<"<<endl;
      }
      else if(a[sz1-1] == b[sz2-1] && a[sz1-1]=='S')
      {
          if(sz1 > sz2) cout<<"<"<<endl;
          else cout<<">"<<endl;
      }
      else  //last characters are equal
      {
          if(sz1 > sz2) cout<<">"<<endl;
          else cout<<"<"<<endl;
      }

   }

   return 0;
}
