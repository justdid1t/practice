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
    int n;  cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);

    int mx = 101, ans = 0;

    while(mx--)
    {
      int i=0,j=n-1, cnt = 0 ;

      while(i<j){
        int s = arr[i]+arr[j];

        if(s == mx) { cnt++; i++; j--; }
        else if(s>mx) j--;
        else i++;
      }

      ans = max(ans,cnt);
    }

    cout<<ans<<endl<<endl;
  }

  return 0;
}
