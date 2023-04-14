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
        int a, b, n;
        cin >> a >> b >> n;

        int sum = 0, c = 0;
        while(sum <= n) {
            sum = a+b;
            a = max(a, b);
            b = sum;
            c++;
        }
        cout << c << nl;
    }

    return 0;
}