#include <bits/stdc++.h>

using namespace std;

int check_kth_bit(int n,int k){
    return n>>k & 1;
}

void print_on_off_bit(int n){
    for(int k=30;k>=0;k--){
        if(check_kth_bit(n,k)){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
}

int turn_on_k_th_bit(int n,int k){
    return (n | 1<<k);
}

int turn_off_k_th_bit (int n,int k){
   return n&(~(1<<k));
}

int toogle_kth_bit(int n,int k){
    return n^(1<<k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=45;
    //cout<<check_kth_bit(13,3)<<endl;
    //print_on_off_bit(n);
    cout<<turn_on_k_th_bit(n,4);
    cout<<endl<<turn_off_k_th_bit(n,4)<<endl;
    cout<<toogle_kth_bit(n,4)<<endl;
    cout<<toogle_kth_bit(n,5)<<endl;
    
    return 0;
}
