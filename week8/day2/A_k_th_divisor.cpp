#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    cin>>n>>k;

    vector<long long> st;

    for (long long i = 1; i * i<= n; i++)
    {
        if(n%i ==0){
            st.push_back(i);
            if(n/i != i)
            st.push_back(n/i);
        }
    }
    sort(st.begin(),st.end());
    if(st.size()<k){
        cout<<-1<<endl;
    }else{
        cout<<st[k-1]<<endl;
    }
    
    return 0;
}