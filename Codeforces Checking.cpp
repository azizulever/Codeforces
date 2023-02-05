#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        char ch;
        cin >> ch;

        string cf = "Codeforces";

        if(cf.find(ch) == -1) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
        }
    }

    return 0;
}