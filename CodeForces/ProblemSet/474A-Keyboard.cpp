#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Teclado 10x3
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string move,word;

    cin >> move >> word;
    int m = 0;
    if(move[0] == 'R'){
        m = -1; 
    }else{
        m = 1;
    }
    string result;


    for(int i=0; i < word.length(); i++){
        for(int j=0; j<31; j++){
            if(word[i] == keyboard[j]){
                result = keyboard[j+m];
                cout << result;
            }
        }
    }    


    return 0;
}