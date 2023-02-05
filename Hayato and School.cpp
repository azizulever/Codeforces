#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, odd = 0, count = 0, index_num;
    cin >> n;

    while(n--) {
        cin >> a;
        int N[a];
        for (int i = 0; i < a; i++) {
            cin >> N[i];
                if(i % 2 == 1){
                    odd += N[i];
                }
                    if(i % 2 == 1) {
                        count += N[i];
                        index_num = N[i];
                    }
                    else {
                        odd;
                        
                    }
        }
    }

    return 0;
}