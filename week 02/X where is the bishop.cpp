
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        char board[8][8];
        for(int i=0;i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>board[i][j];
            }
        }

    for(int i=0;i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i==0 || j==0 || i==7 || j==7) continue;

            if(board[i-1][j-1]=='#' && board[i-1][j+1]=='#' && board[i+1][j-1]=='#' && board[i+1][j+1]=='#')
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }

    }

    return 0;
}
