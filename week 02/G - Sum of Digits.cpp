#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll countSum(ll n)
{
   ll sum = 0;
   if(n == 0) return sum;

   while(n > 0)
   {
      sum += n%10;
      n /= 10;
   }

     return sum;
}

ll countDigit(ll n)
{
    if(n == 0) return  1;
    ll cnt = 0;
    while(n > 0)
    {
        n /=10;
        cnt++;
    }
    return cnt;
}

int main()
{
    string s; cin>>s;
    ll digit = s.size();

    ll sum = 0,cnt = 0;
    if(digit == 1) cout<<cnt<<endl;
    else{
        for(char c: s)
        {
          sum += c-'0';
        }
        digit = countDigit(sum);
        cnt++;

        while(digit > 1)
        {
            sum =countSum(sum);
            digit = countDigit(sum);
            cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}

