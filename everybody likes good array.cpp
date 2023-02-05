#include<bits/stdc++.h>
using namespace std;

int Display(int n, int a[]){
    int result = 0;
    for (int i = 1; i < n; i++){
        if ((a[i] % 2) == (a[i-1] % 2)){
            result++;
        }
    }
    return result;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << Display(n, a) << endl;
    }
    return 0;
}