#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+10;

int main()
{
  int t;  cin >> t;
  while(t--)
  {
    int one=0,zero = 0,ans = 0;
    string a;  cin >> a;
    for(auto c: a)
    {
        if(c=='1') one++;
        else zero++;
    }

    if(one == zero) cout<<0<<endl;
    else
    {
       for(int i=0; i<a.size(); i++)
       {
           if(a[i]=='1'){
             if(one > 0) one--;
             else { cout<<a.size()-i<<endl; break; }
           }
           else
           {
               if(zero > 0) zero--;
               else { cout<<a.size()-i<<endl; break; }
           }
       }
    }

    cout<<endl;
  }

  return 0;
}
