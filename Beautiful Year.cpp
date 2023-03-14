#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int n; cin >> n;

    while(true) {
        n += 1;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }
    }

    cout << n;

    return 0;
}