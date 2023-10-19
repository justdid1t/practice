#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1e9 + 7
int mat[2][2];
void rotate_mat()
{
    int tmp = mat[0][0];
    mat[0][0] = mat[1][0];
    mat[1][0] = tmp;

    tmp =  mat[0][1];
    mat[0][1] = mat[1][1];
    mat[1][1] = tmp;

    tmp = mat[0][1];
    mat[0][1] = mat[1][0];
    mat[1][0] = tmp;

}

int main()
{
    int t; cin>>t;
    while(t--)
    {
       int mini = 10000;
       for(int i=0; i<2; i++)
       {
           for(int j=0; j<2; j++)
           {
               cin>>mat[i][j];
               mini = min(mat[i][j],mini);
           }
       }

       while(mat[0][0] != mini)
       {
           rotate_mat();
       }

       if(mat[0][0]<mat[0][1] && mat[1][0]<mat[1][1])
       {
           if(mat[0][0]<mat[1][0] && mat[0][1]<mat[1][1])
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0;
}

