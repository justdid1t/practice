#include <iostream>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--)
    {
      int n; cin>>n;
      int arr[n+1];
      for(int i=1; i<=n; i++) cin>>arr[i];
      int cnt  = 0;
      for(int i=1; i<=n; i++)
      {
        if(arr[i] > (i+cnt)) cnt += arr[i]-(i+cnt);
      }
      cout<<cnt<<endl;
    }
    return 0;
}