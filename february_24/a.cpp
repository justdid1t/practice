#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
      ll n,m;  cin >> n >> m;
      ll a[n],b[m],c[n];
      for(int i=0; i<n; i++)  cin >> a[i];
      for(int i=0; i<m; i++) cin >> b[i];

      sort(a,a+n);
      sort(b,b+m);

      int i=0,j=n-1,k=0, l = m-1;

      ll ans = 0;

      while(i<=j)
      {
          if( abs(a[i]-b[l]) > abs(a[j]-b[k]) ){
            ans += abs(a[i]-b[l]);
            i++;
            l--;
          }
          else{
            ans += abs(a[j]-b[k]);
            j--;
            k++;
          }
      }

      cout<<ans<<endl<<endl;;

    }
    return 0;
}
