#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="abcdefghijklmnopqrstuvwxyz";
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int i,j,f = 0;
    for(i=0; i<s1.size(); i++)
    {
        if( i == s.size()) {f=1; cout<<s1[i]<<endl; break;}
        if( s1[i] != s[i]) {f=1; cout<<s1[i]<<endl; break;}
    }

    if(f == 0) cout<<"None"<<endl;
    return 0;
}

