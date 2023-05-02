#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define int long long
#define vec vector<int>
#define N cout << "NO" << nl
#define Y cout << "YES" << nl
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
using namespace std;

int32_t main() {
    char n; cin >> n;

    if(n > 64 && n < 91)
        cout << "ALPHA\nIS CAPITAL";
    else if(n > 96 && n < 123)
        cout << "ALPHA\nIS SMALL";
    else
        cout << "IS DIGIT";

    return 0;
}