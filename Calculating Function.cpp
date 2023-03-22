#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define for0 for(int i = 0; i < n; i++)
#define for1 for(int i = 1; i <= n; i++)
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    int n; cin >> n;
  
    if (n % 2 == 0)
      cout << n/2;
    else
      cout << -(n+1)/2;
  
    return 0 ;
}
