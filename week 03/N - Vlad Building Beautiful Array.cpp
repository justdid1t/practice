#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int eve[n]; int odd[n];
        for(int i=0; i<n; i++)
        {
          eve[i] =0; odd[i]=0;
        }
        sort(a,a+n);
        int e=0,o=0;
        for(int i=0; i<n; i++)
        {
            eve[i] = e;
            odd[i] = o;

            if(a[i]%2==0) e++;
            else o++;
        }
 bool pos = true;
        for(int i=0; i<n; i++)
        {

           if(a[0]%2==0)
           {
               if(a[i]%2 != 0)
               {
                  if(odd[i]==0) {pos = false; break;}
               }
           }
           else
           {
               if(a[i]%2 == 0)
               {
                  if(odd[i]==0) {pos = false; break;}
               }
           }
        }
        if(pos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

