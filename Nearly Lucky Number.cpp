#include <bits/stdc++.h>
using namespace std;

int main() {
        string numb;
        cin >> numb;

        long long count = 0;

        for (int i = 0; i <= numb.size(); i++) {
            if(numb[i] == '4' || numb[i] == '7') count++;
        }

        if(count == 7 || count == 4) cout << "YES";
        else cout << "NO";

    return 0;
}