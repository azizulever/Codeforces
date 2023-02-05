#include <bits/stdc++.h>
using namespace std;

int main() {
    int game, Anton = 0, Danik = 0; 
    cin >> game;

    string s;
    cin >> s;

    for (int i = 0; i < game; i++){
        if (s[i] == 'A'){
            Anton++;
        }
        else {
            Danik++;
        }
    }

        if (Anton > Danik){
            cout << "Anton";
        }
        else if (Anton < Danik){
            cout << "Danik";
        }
        else {
            cout << "Friendship";
        }

    return 0;
}