#include <bits/stdc++.h>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    for (int i = 0; i < first.size(); i++){
            first[i] = tolower(first[i]);
            second[i] = tolower(second[i]);
    }

    if (first > second)
        cout << "1\n"; 
        
    else if(first < second)
        cout << "-1\n";
    
    else
        cout << "0\n";

    return 0;
}