#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool solve(string a, string b)
{
    int n = a.size();
    int m = b.size();
    if(n < m) return false;
    int i = n-1, j = m-1;

    while(1)
    {

       if(j < 0) return true;
       if(i < 0) return false;

       if(b[j] == a[i]) {
        i--;
        j--;
       }
       else
       {
           i -= 2;
       }
    }
}

int main()
{
   int t;  cin >> t;
   while(t--)
   {
      string a,b;  cin >> a >> b;

      if(solve(a,b)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }

   return 0;
}
