
#include<bits/stdc++.h>
using namespace std;

int count_digit(int n)
{
    if(n == 0) return 1;
    int cnt = 0;
    while(n > 0)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main()
{
    int n; cin>>n;

    int digit = count_digit(n);
    int zero = 4 - digit;
    while(zero--)
    {
        cout<<0;
    }
    cout<<n<<endl;
    return 0;
}
