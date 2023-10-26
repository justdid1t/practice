#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int N = 1e6+5;
const int mod = 1e9+7;

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      int f[200];
      for(int i=0; i<200; i++) f[i] = 0;

      int n,k;  cin >> n >> k;
      string s;  cin >> s;

      for(char c: s)
      {
          f[c]++;
      }

      int cnt = 0;
      for(int i=65; i<=90; i++)
      {
          if(f[i] != 0 || f[i+32] != 0)
          {
              int x = f[i];
              int y = f[i+32];

              cnt += min(x,y);
              int dif  = abs(x-y);

              if(x<y)  { f[i]=0; f[i+32] -= dif; }
              else { f[i+32]=0; f[i] -= dif; }

              while(k > 0 && dif >= 2 )
              {
                  cnt++;
                  dif -= 2;
                  k--;

                  if(x<y)  {  f[i+32] -= 2; }
                  else {  f[i] -= 2; }
              }

          }
      }

      cout<<cnt<<endl;
   }

   return 0;
}
