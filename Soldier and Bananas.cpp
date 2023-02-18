#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w; cin >> k >> n >> w;
    long borrow = 0;

    for(int i = 1; i <= w; i++) {
        borrow += k*i;
    }

    if(borrow < n)
        cout << "0";
    else
        cout << abs(borrow - n);

    return 0;
}