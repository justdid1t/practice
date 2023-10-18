#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll primarySum(string s,int n)
{
    ll sum = 0;
    int indx = 0;
    for(char c: s)
    {
        if(c=='L')  sum += indx;
        else sum += (n-indx-1);
        indx++;
    }
    return sum;
}

void solve(int n)
{
    string s; cin>>s;
    ll sum = primarySum(s,n);

    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
      ll cv,ov;
      if(s[i] == 'L') cv = i;
      else cv = n-i-1;

      if(s[i] == 'L') ov = n-i-1;
      else ov = i;
      if(ov > cv) v.push_back({ov,cv});
    }
    sort(v.begin(),v.end(),[](const pair<ll,ll>&a,const pair<ll,ll>&b) {return a.first>b.first;} );

    for(int k=0; k<n; k++)
    {
        if(k<v.size()) sum += (v[k].first - v[k].second );
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        solve(n);
    }
    return 0;
}

