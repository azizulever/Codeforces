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
   int n, m; cin >> n >> m;
   
   for1 {
    for(int j = 0; j < m; j++) {
        if(i % 4 == 0) {
            if(j == m-1)
                cout << "#";
            else
                cout << ".";
        }
        else if(i % 4 == 2) {
            if (j == 0)
                cout << "#";
            else
                cout << ".";
        }
        else
            cout << "#";
    }
    cout << nl;
   }

    return 0;
}