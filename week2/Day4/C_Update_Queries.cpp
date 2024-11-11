#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string firstStr;
        cin>>firstStr;

        set<int> locations;
        //same location e 2bar push lage na and chuto ta push korlei hoy

        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            locations.insert(x);
        }
        string c;
        cin>>c;
        //eita lexi vabe push korbo jeno chuto ta thake
        sort(c.begin(),c.end());
        int i = 0;
        for(auto it:locations){
            firstStr[it-1] = c[i];
            i++;
        }
        cout<<firstStr<<endl;
    }
    return 0;
}