#include <bits/stdc++.h>
using namespace std;

int main() {
    string numbers;
    cin >> numbers;

    cout << numbers;
    reverse(numbers.begin(), numbers.end());
    cout << numbers;

    return 0;
}