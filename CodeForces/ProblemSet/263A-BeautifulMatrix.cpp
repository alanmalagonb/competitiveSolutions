#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    for(int i=1; i <= 5; i++)
    {
        for(int j=1; j<= 5; j++)
        {
            cin >> n;
            if(n == 1){
                n = abs(3-i) + abs(j-3);
                cout << n << endl;
            }
        }
    }
    return 0;
}