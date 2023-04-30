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

    int one = 0, five = 0, ten = 0, twenty = 0, hundred = 0;

    while(n != 0) {
        if(n >= 100) {
            hundred++;
            n-=100;
        }
        else if(n >= 20) {
            twenty++;
            n-=20;
        }
        else if(n >= 10) {
            ten++;
            n-=10;
        }
        else if(n >= 5) {
            five++;
            n-=5;
        }
        else {
            one++;
            n--;
        }
    }
    int result = (one+five+ten+twenty+hundred);
    cout << result;

    return 0;
}