#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float x,y,z;
    cin>>x>>y>>z;

    float a = float(x + (y*.5));
    
    float b = z + (y*0.5);
    float remain = 4-(x+y+z);
    // cout<<a-b<<endl;
    // cout<<remain<<endl;
    if(a-b > 0){
        cout<<"Yes";
    }else{
        if(a + remain > b){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }


    return 0;
}