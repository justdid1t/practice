#include <iostream>
using namespace std;
#define ll long long

int main() 
{
    ll x,y;
    cin>>x>>y;
    ll cnt = 0;
    
    while(x <= y)
    {
      cnt++;
      x *= 2 ;
    }
    cout<<cnt<<endl;
    return 0;
}