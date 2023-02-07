#include <bits/stdc++.h>
using namespace std;

int main() {
    int Alice = 1, Bob = 0, extra = 0;
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        int i = n;
        do{
            Alice = Bob + 4;
            i -= Alice;

            Bob = Alice + 4;
            i -= Bob;
            
            if(i > n) {
                extra = i - n;
                Bob -= extra;
            }
        }
        while (i > 0);

        cout << Alice << " " << Bob << "\n";

    }

    return 0;
}