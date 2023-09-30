#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x;  cin >> x;

    int y = x;

    float z = x - y;

    if(z >= 0.5) y++;
    cout<<y<<endl;
    return 0;
}

