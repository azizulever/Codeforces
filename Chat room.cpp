#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define nl endl
#define tc int t; cin >> t; while(t--)
using namespace std;

int32_t main() {
    string word, hello = "hello", result = ""; cin >> word;
    int count = 0;
    
    for(int i = 0; i < word.length(); i++) {
        if(word[i] == hello[count]) {
            count++;
            result += word[i];
        }
    }

    if(result == hello)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}