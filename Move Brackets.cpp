#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, joss = 0, ans = 0;
        string Brackets;
        cin >> n >> Brackets;
 
            for(int i = 0; i < Brackets.size(); i++){
                if (Brackets[i] == '(') {
                    joss++;
                }
                else {
                    joss--;
                }
 
                if(joss < 0){
                    ans++;
                    joss = 0;
                }
            }
            cout << ans << "\n";
    }

    return 0;
}