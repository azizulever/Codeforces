#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, capacity = 0, passengers = 0;
    cin >> n;

    while(n--) {
        int a, b;
        cin >> a >> b;
        passengers += b - a;
        capacity = max(capacity, passengers);
    }

    cout << capacity << '\n';

    return 0;
}