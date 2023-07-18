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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tc {
        int n, a, temp = 0, zero = 0;
        cin >> n;
        for0 {
            cin >> a;
            if(a == 1) {
                temp = 0;
            }
            else {
                temp++;
                zero = max(temp, zero);
            }
        }
        cout << zero << nl;
    }

    return 0;
}