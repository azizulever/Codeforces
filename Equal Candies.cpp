#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, candies, eat = 0;
    cin >> tc;

    while(tc--){
        int boxes;
        cin >> boxes;
        vector <int> v;
            for (int i = 0; i < boxes; i++){
                cin >> candies;
                v.push_back(candies);
            }
            sort(;
v.begin(), v.end())
            for (int i = 0; i < v.size(); i++){

                eat += v[i] - v[0];
            }
            cout << eat << "\n";
            eat = 0;

    }
       
    return 0;
}