#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            v[i] = i+1;
        }
        int dif = k - n;
        if(dif==0)
        {
          for(int i=0; i<n; i++)
          {
              cout<<v[i]<<" ";
          }
          cout<<endl;
        }
        else
        {
            int d = 1;
            v[n-1] = k;
           for(int i=n-2; i>0; i--)
           {
               if(v[i-1] < v[i+1]-d) v[i] = v[i+1]-d;
               d++;
           }

           for(int x: v)
           {
               cout<<x<<" ";
           }
           cout<<endl;
        }
    }
    return 0;
}

