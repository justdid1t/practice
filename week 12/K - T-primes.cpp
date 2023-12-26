#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<int> pf; //prime factors

      while(n%2 == 0)
      {
        pf.pb(2);
        n /= 2;
      }

    for(int i=3; i*i<=n; i+=2)
    {
      while(n%i == 0)
      {
        pf.pb(i);
        n /= i;
      }
    }

      if(n > 2) pf.pb(n);

      if(pf.size()<3) cout<<"NO"<<endl;
      else{

      }


      cout<<endl;
    }
    return 0;
}
