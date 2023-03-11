#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, capacity = 0; cin >> tc;

    while(tc--) {
        int p, q; cin >> p >> q;

        if((q-p) > 1)
            capacity++;
    }
    cout << capacity;

    return 0;
}