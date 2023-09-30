#include<bits/stdc++.h>
using namespace std;

int arr[3];
int dp[3][10001];

bool knapsack(int n,int s)
{
    if(n == 0)  {
        if(s == 0) return true;
        else return false;
    }

    if(dp[n][s] != -1) return dp[n][s];

    if(s >= arr[n])
    {
        bool op1 = knapsack(n,s-arr[n]);
        bool op2 = knapsack(n-1,s);
        return dp[n][s] = op1 || op2;
    }
    else return dp[n][s] = knapsack(n-1,s);
}

int main()
{
     int c;
     cin>>arr[1]>>arr[2];
     cin>>c;

     if(c%arr[2]==0 || c%arr[1]==0) cout<<"Yes"<<endl;
     else
     {
         for(int i=0; i<=2; i++)
         {
             for(int j=0; j<10001;j++) dp[i][j] = -1;
         }

         if(knapsack(2,c)) cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
     }
     return 0;
}

