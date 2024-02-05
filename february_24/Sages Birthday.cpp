#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+10;

int main()
{
  int n;  cin >> n;

  vector<int>v(n);
  for(int i=0; i<n; i++) cin >> v[i];

  sort(v.begin(),v.end());

  queue<int>s,l;

      for(int i=0; i<n; i++)
      {
          if(i<n/2) s.push(v[i]);
          else l.push(v[i]);
      }
    vector<int> fv;

    for(int i=0; i<n; i++)
    {
       if(i%2==0 && !l.empty()) { fv.pb(l.front());  l.pop(); }
       if(i%2!=0 && !s.empty()) {fv.pb(s.front());  s.pop(); }
    }
    int cnt  = 0;
    for(int i=1; i<n-1; i++)
    {
        if(fv[i]<fv[i-1] && fv[i]<fv[i+1]) cnt++;
    }
    cout<<cnt<<endl;

    for(auto x: fv)
    {
        cout<<x<<" ";
    }
    cout<<endl;

  return 0;
}

