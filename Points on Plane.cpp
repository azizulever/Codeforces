#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    tc {
        int x; cin >> x;
        int y = sqrt(x);

        if(y*y < x)
            cout << y << nl;
        else
            cout << y-1 << nl;
    }

    return 0;
}