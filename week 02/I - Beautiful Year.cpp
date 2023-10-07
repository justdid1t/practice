#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_beautiful(int y)
{
    set<int> st;
    while(y > 0)
    {
        st.insert(y%10);
        y /= 10;
    }
    if(st.size() == 4) return true;
    else return false;
}

int main()
{
    int y; cin>>y;

    while(1)
    {
        y++;
        if(is_beautiful(y)) {cout<<y<<endl; break;}
    }
    return 0;
}

