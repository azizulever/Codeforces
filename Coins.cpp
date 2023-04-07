#include <bits/stdc++.h>
#define nl endl
#define pb push_back
#define int long long
#define vec vector<int>
#define tc int t; cin >> t; while(t--)
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
using namespace std;

int32_t main() {
    tc {
        int n, k; cin >> n >> k;

        if(n%2 != 0 && k%2 == 0)
             cout << "NO" << nl;
        else
             cout << "YES" << nl;
    }

    return 0;
}