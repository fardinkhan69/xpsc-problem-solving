#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;

    if(x+y <= z){
        cout<<(2*x)+(3*y)<<endl;
    }else{
        int total = (2*z) + y;
        cout<<total<<endl;
    }
    return 0;
}