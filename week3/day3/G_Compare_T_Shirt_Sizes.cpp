#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a == b){
            cout<<"="<<endl;
        }else if(a.back() == b.back()){
            if(a.back() == 'S'){
                if(a.size() > b.size()){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<">"<<endl;
                }
            }
            else{
                if(a.size() > b.size()){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"<"<<endl;
                }
            }
        }else{
            if(a.back() == 'M' && b.back()=='S'){
                cout<<">"<<endl;
            }else if(a.back()=='S' && b.back() == 'M'){
                cout<<"<"<<endl;
            }else if(a.back() == 'M' && b.back() == 'L'){
                cout<<"<"<<endl;
            }
            else if(a.back() == 'L' && b.back() == 'M'){
                cout<<">"<<endl;
            }
            else if(a.back() == 'S' && b.back() == 'L'){
                cout<<"<"<<endl;
            }else if(a.back() == 'L' && b.back() == 'S'){
                cout<<">"<<endl;
            }
        }
    }
    return 0;
}