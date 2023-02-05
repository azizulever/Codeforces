#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        int left = 0, right = n - 1, size = n;
        while (s[left] != s[right] && size > 0) {
            left++;
            right--;
            size -= 2;
        }
        cout << size << "\n";
    }

    return 0;
}