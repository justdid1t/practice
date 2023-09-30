#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c; cin>>a>>b>>c;
    int tmp = c;
    int f = 0;
    if(c<=b)
    {
        while(c <= b)
        {
            if(c>=a && c<=b)
            {
                cout<<c<<endl;
                f = 1;
                break;
            }
            c += tmp;
        }
        if(f == 0) cout<<-1<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}

