#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 61;
bool vis[N][N];

bool palindrome(int h,int m)
{
    vis[h][m] = true;
   int a = h%10; h /= 10;
   int b = h%10;

   int c = m%10; m /= 10;
   int d = m%10;

   if(a==d && b==c) return true;
   else return false;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int h,m; char c;
        cin>>h>>c>>m;
        int x; cin>>x;
        int tmph = h,tmpm = m;
        int addh = x/60;
        int addm = x%60;
        ll cnt = 0;

        for(int i=0; i<=24; i++)
        {
            for(int j=0; j<=60; j++)
            {
                vis[i][j] = false;
            }
        }
        while(1)
        {
            for(int i=0; i<addh; i++)
            {
                if(h+1 == 24) h = 0;
                else h++;
            }
            for(int j=0; j<addm; j++)
            {
                if(m+1 == 60)
                {
                    m = 0;
                    h++;
                    if(h == 24) h = 0;
                }
                else m++;
            }
            if(vis[h][m] != true && palindrome(h,m)) cnt++;
            if(h == tmph && m == tmpm) break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

