#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      char mat[n][m];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          cin>>mat[i][j];
        }
      }

      int v =0,i=0,k=0,a=0;

    for(int c=0;c<m;c++)
    {
      for(int r=0;r<n;r++)
      {
        if(mat[r][c] =='v' && v==0 && i==0 && k==0 && a==0) {v++; break;}
        else if(mat[r][c] =='i' && i==0 && v==1 && k==0 && a==0 ) {i++; break;}
       else if(mat[r][c] =='k' && k==0 && i==1 && v==1 && a==0) {k++; break;}
       else if(mat[r][c] =='a' && a==0 && k==1  && v==1 && i==1) {a++; break;}
      }
    }

    if(v==1 && i==1 && k==1 && a==1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;



    }


    return 0;
}
