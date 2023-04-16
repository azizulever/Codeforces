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
        int n, Mihai = 0, Bianca = 0; cin >> n;

        vec v(n);
        for0 {
            cin >> v[i];
        }

        for0 {
            if(v[i] % 2 != 0)
                Bianca += v[i];
            else
                Mihai += v[i];
        }
        
        if(Mihai <= Bianca)
            N;
        else
            Y;
    }

    return 0;
}