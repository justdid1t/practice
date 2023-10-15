#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
ll mat[201][201];
vector<ll> ans;
int n,m;

void input(int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }
}

bool valid(int r,int c)
{
    return (r>=0 && r<n && c>=0 && c<m);
}

void diagonal_sum(int i,int j)
{
    ll sum = 0;
              int r=i-1,c=j+1;
              while(valid(r,c))
              {
                  sum+= mat[r][c];
                  r--; c++;
              }

              r=i+1; c=j-1;
              while(valid(r,c))
              {
                  sum+= mat[r][c];
                  r++; c--;
              }

              r=i-1; c=j-1;
              while(valid(r,c))
              {
                  sum+= mat[r][c];
                  r--; c--;
              }


              r=i+1; c=j+1;
              while(valid(r,c))
              {
                  sum+= mat[r][c];
                  r++; c++;
              }


              sum += mat[i][j];

              ans.push_back(sum);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
       cin>>n>>m;
       input(n,m);



       for(int i=0; i<n; i++)
       {
           for(int j=0; j<m; j++)
           {
              diagonal_sum(i,j);
           }
       }

       sort(ans.begin(),ans.end());
       cout<<ans[ans.size()-1]<<endl;
       ans.clear();
    }
    return 0;
}

