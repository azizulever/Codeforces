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
        int n, q, l, r, k, elem, count = 0;
        
        vector<int> N;
        for0 {
            cin >> elem;
            N.pb(elem);
        }

        for(int i = 0; i < q; i++) {
            cin >> l >> r >> k;
            for(int j = l-1; j < r; j++) {
                N[j] == k;
            }
        }

        for0 {
            count += N[i];
        }
        if (count % 2 == 1)
            cout << "YES" << nl;
        else 
            cout << "NO" << nl;
    }

    return 0;
}