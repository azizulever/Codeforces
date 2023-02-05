#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    int n;
    cin >> tc;

    while(tc--){
        cin >> n;
                if (n & 1)
                    cout << -1 << "\n";
                else
                    cout << n / 2 << " " << 1 << "\n";
    }
    
    return 0;
}

