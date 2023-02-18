#include <bits/stdc++.h>
using namespace std;

int main() {
    string situation; cin >> situation;
    int result = 1;

    for(int i = 1; i < situation.length(); i++) {
        if(situation[i] == situation[i-1]) {
            result++;
            if (result >= 7) {
                break;
            }
        }
        else
            result = 1;
    }

    if (result >= 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}