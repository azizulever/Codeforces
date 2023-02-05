#include<bits\stdc++.h>
using namespace std;

int main() {
    int two, three, five, six, sum = 0;
    cin >> two >> three >> five >> six;

    while(two > 0 && five > 0 && six > 0){
        two--;
        five--;
        six--;
        sum = sum + 256;
    }

    while(three > 0 && two > 0){
        two--;
        three--;
        sum = sum + 32;
    }
    cout << sum;

    return 0;
}