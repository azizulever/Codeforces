#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    string ticket_numb;
    while(tc--){
        cin >> ticket_numb;
        if(ticket_numb[0] + ticket_numb[1] + ticket_numb[2] == 
           ticket_numb[3] + ticket_numb[4] + ticket_numb[5])
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
        
    }

    return 0;
}