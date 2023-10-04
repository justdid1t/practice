#include <iostream>
using namespace std;

int main() 
{
    int a,b; cin>>a>>b;
    
    int case1 = a+a+-1;
    int case2 = b+b-1;
    int case3 = a+b;
    
    cout<<max(case1,max(case2,case3))<<endl;
    
    return 0;
}