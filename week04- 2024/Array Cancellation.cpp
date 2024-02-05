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
    ll n;  cin >> n;
    ll arr[n]; for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ll ns = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]<0) ns += abs(arr[i]);
        else
        {
            if(arr[i]>= ns) { ns = 0; continue; }
            else ns = abs(ns-arr[i]);
        }
    }



    cout<<ns<<endl<<endl;
  }
  return 0;
}
