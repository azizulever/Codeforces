#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define forl for(int i = 0; i < n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int n, openion, count = 0; cin >> n;

    vector<int> v;
    forl {
        cin >> openion;
        v.pb(openion);
    }

    forl {
        if(v[i] == 1)
            count++;
    }

    if(count == 0)
        cout << "EASY";

    else 
        cout << "HARD";

    return 0;
}