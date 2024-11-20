#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        map<int,int> mpa;
        map<int,int> mpb;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mpa[a[i]]=i;
            
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
            mpb[b[i]] = i;
        }

        bool flagA = true;
        int alex = 0;
        int bob = 0;
        int k =0;
        cout<<"test "<<t<<endl;
        while(k<n){
            cout<<k<<endl;
            if(flagA){
                int val = mpa.rbegin()->first;
                int pos = mpa.rbegin()->second;
                int val2 = mpb.rbegin()->first;
                int pos2 = mpb.rbegin()->second;
                if(val>val2){     
                    alex += val;
                    //cout<<val<<endl;
                    mpb.erase(b[pos]);
                    mpa.erase(val);
                }else{
                    alex += val2;
                    //cout<<"sec"<<val2<<endl;
                    mpa.erase(a[pos2]);
                    mpb.erase(val2);
                }
                
            }else{
                int val2 = mpa.rbegin()->first;
                int pos2 = mpa.rbegin()->second;
                bob += max(val2,b[pos2]);
                mpa.erase(val2);
                mpb.erase(b[pos2]);
                
            }
            flagA = !flagA;
            k++;
        }
        if(alex > bob)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;   
    }
    return 0;
}