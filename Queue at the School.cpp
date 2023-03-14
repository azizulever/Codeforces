#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int n, t; cin >> n >> t;
    string s; cin >> s;

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < n; j++) {
            if (s[j] == 'B' && s[j+1] == 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }
    cout << s;

    return 0;
}