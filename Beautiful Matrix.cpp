#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[25];
    int count = 0, index;

    for(int i = 0; i < 25; i++) {
        cin >> matrix[i];
        count++;
        
        if(matrix[i] > 0)
            index = count;
    }

    if(index < 13)
        cout << 13 - index;

    else
        cout << index - 13;

    return 0;
}