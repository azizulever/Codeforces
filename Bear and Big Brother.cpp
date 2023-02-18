#include <bits/stdc++.h>
using namespace std;

int main() {
    int Limak, Bob; cin >> Limak >> Bob;
    int boro, count = 0;

    while(Limak <= Bob) {
        Limak *= 3;
        Bob *= 2;
        count++;
    }
    cout << count;

    return 0;
}