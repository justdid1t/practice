#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       set<int>st;
       for(int i=0; i<n; i++)
       {
           int x; cin>>x;
           st.insert(x);
       }
       int dif =  n - st.size();
       if(dif%2==0) cout<<st.size()<<endl;
       else cout<<st.size()-1<<endl;
    }
    return 0;
}

