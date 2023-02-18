#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, coins, sum = 0, temp, i, j, sum2 = 0, result = 0;
    cin >> n;
    
        int N[n];
            for(int i = 0; i < n; i++){
                cin >> N[i];
                sum += N[i];
            }
            
            for(i = 0; i < n; i++){
                for(j = 0; j < n - 1; j++){
                    if(N[j] < N[i]){
                            temp = N[i]; 
                            N[i] = N[j];
                            N[j] = temp;
                            }
                    }
            }
            sum = sum / 2;

                for (int i = 0; i < n; i++){
                    // cout << N[i] <<" ";
                        sum2 += N[i];
                        result++;
                        if(sum2 > sum){
                            break;
                        }
                }

            cout << result;

    return 0;
}