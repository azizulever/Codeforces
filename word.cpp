#include<bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    int upper = 0, lower = 0;
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            lower++;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z'){
            upper++;
        }
    }

    if(lower >= upper){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        cout<<word<<endl;
    }
    
    else{
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        cout<<word<<endl;
    }
 
return 0;
}