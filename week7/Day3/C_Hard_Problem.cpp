#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int totalSeat = 2*m;
        int personSeated = 0;
        if(a>m){
            personSeated += m;
            totalSeat -= m;
        }else{
            personSeated += a;
            totalSeat -= a;
        }

        if(b > m){
            personSeated += m;
            totalSeat -= m;
        }else{
            personSeated += b;
            totalSeat -= b;
        }

        if(c > totalSeat){
            personSeated += totalSeat;
            totalSeat = 0;
        }else{
            personSeated += c;
            totalSeat -= c;
        }

        cout<<personSeated<<endl;


        
    }
    return 0;
}