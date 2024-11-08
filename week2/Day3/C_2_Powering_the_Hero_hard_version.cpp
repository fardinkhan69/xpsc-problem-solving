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
        deque<int> cards(n);
        for(int i=0;i<n;i++){
            cin>>cards[i];
        }

        priority_queue<long long> bonusCards;
        long long total = 0;
        
        while(!cards.empty()){
            if(cards.front() > 0){
                bonusCards.push(cards.front());
            }else if(!bonusCards.empty() && cards.front() == 0){
                total += bonusCards.top();
                bonusCards.pop();
            }
            cards.pop_front();
        }

        cout<<total<<endl;
    }
    return 0;
}