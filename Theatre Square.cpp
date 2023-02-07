#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n, a, sum, sum2;
    cin >> m >> n >> a;

    if (m % a == 0) {
        sum = (m / a);
    }
    else {
        sum = (m/a) + 1;
    }

    if(n % a == 0) {
        sum2 = (n/a);
    }
    else{
        sum2 = (n / a) + 1;
    }

    cout << sum * sum2;
    return 0;
}