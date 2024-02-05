#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int N = 1e6+10;

int main()
{
  int t;  cin >> t;
  while(t--)
  {
    int n;  cin >> n;
    int arr[n];
    int mini = INT_MAX;

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        mini = min(mini,arr[i]);
    }

    vector<int>dv; //divisor vector
    vector<int>fv(n,-1); //final vector

    for(int i=0; i<n; i++){
        if(arr[i]%mini ==0) dv.pb(arr[i]);
        else{
            fv[i] = arr[i];
        }
    }

    sort(dv.begin(),dv.end());

    for(int i=0,j=0; i<n; i++){
        if(fv[i] == -1){
            fv[i] = dv[j];
            j++;
        }
    }
    bool f = true;
    for(int i=1; i<n; i++){
        if(fv[i]<fv[i-1]){
            f=false;
            break;
        }
    }

    if(f) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    cout<<endl;

  }

  return 0;
}
