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
    tc {
        int a, b; cin >> a >> b;

		if (a % b == 0)
            cout << 0 << nl;
		else
            cout << b - a % b << nl;
    }

    return 0;
}