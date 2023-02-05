#include <bits/stdc++.h>
using namespace std;

int main(){
    string program;
    cin >> program;

    for (int i = 0; i < program.length(); i++)
    {
        if(program[i] == 'a' || program[i] == 'A' || program[i] == 'e' || program[i] == 'E' || 
           program[i] == 'I' || program[i] == 'i' || program[i] == 'o' || program[i] == 'O' ||
           program[i] == 'U' || program[i] == 'u' || program[i] == 'y' || program[i] == 'Y'){
             program.erase(i);
           }
        // else{
        //     cout << program;
        // }
        
    }
    cout << program;

    return 0;
}