#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    deque<int> dq(n);
    for(int i=0;i<n;i++){
        cin>>dq[i];
    }
    int sreja =0;
    int dima = 0;
    int flag  = 1;
    while(!dq.empty()){
        if(dq.front() > dq.back()){
            if(flag == 1){
                sreja += dq.front();
                dq.pop_front();
                flag = 0;
            }else{
                dima += dq.front();
                dq.pop_front();
                flag = 1;
            }
        }else{
            if(flag == 1){
                sreja += dq.back();
                dq.pop_back();
                flag = 0;
            }else{
                dima += dq.back();
                dq.pop_back();
                flag = 1;
            }
        }
    }
    cout<< sreja<<" "<<dima<<endl;
    return 0;
}