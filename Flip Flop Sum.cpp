#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, index, ans = 0;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        int N[n];
        index = (n - 1);
        for (int i = 0; i < n; i++){
            cin >> N[i];
            ans += N[i];      
        }
        
        for (int i = index-1; i < n; i++){
            if(N[i] == 1) {
                ans--;
            }
            else {
                ans++;
            }
        } 
    }
    cout << ans << "\n";

    return 0;
}
