#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
#define loop(a, c) for (int(a) = 0; (a) < (c); (a)++)

int main()
{
    int n,cnt =0; cin>>n;
    string s; cin>>s;
    string target = "ABC";

    for(int i=0; i<n-2; i++)
    {
        string tmp;
        for(int j=i; j<i+3; j++)
        {
            tmp += s[j];
        }
        if(tmp == target) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

