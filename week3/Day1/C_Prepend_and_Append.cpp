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
        string s;
        cin>>s;
        int i=0;
        int j = n-1;
        int count=0;
        while(i<=j){
            if(s[i] == s[j]){
                break;
            }
            i++;
            j--;
            count+=2;
        }
        cout<<s.size()-count<<endl;
    }
    return 0;
}