#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e5+5;
int frq[N];

int main()
{
   int n,k; cin >> n >> k;
   int arr[n];
   for(int i=0;i<n; i++)
   {
       cin >> arr[i];
   }

   int l=0,r=0,unq = 0, ans = 0;

   for( ; r<n; r++)
   {
       frq[arr[r]]++;
       if(frq[arr[r]]==1) unq++;
       while(unq > k )
       {
           frq[arr[l]]--;
           if(frq[arr[l]]==0) unq--;
           l++;
       }
       ans += (r-l+1);
   }
   cout<<ans<<endl;

   return 0;
}
