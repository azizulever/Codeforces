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
    int n; cin >> n;
    int even = 0, odd = 0;

    vec arr(n);
    for0 {
        cin >> arr[i];
        if(arr[i]%2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    if(even > odd) {
        for0 {
            if(arr[i]%2 != 0) {
                cout << (i+1) << nl;
                break;
            }
        }
    }

    else {
        for0 {
            if(arr[i]%2 == 0) {
                cout << (i+1) << nl;
                break;
            }
        }
    }

    return 0;
}