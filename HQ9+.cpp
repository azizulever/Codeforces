#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    string p; cin >> p;

    for(int i = 0; i < p.length(); i++) {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}