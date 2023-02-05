#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    float fraction = 0.0;
    cin >> n;

    int p[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
        fraction += p[i];
    }
    fraction /= n;
    printf("%.11f", fraction);

    return 0;
}