#include <bits/stdc++.h>

using namespace std;

int opposite(int num){
    int r;
    if(num == 1) r = 0;
    else r = 1;
    return r;
}

bool isOdd(int num)
{
    bool result = false;
    if(num%2 != 0)
    {
        result = true;
    }
    return result;
}

int main(){
    int A[3][3];
    int B[3][3] = 
    {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> A[i][j];
            
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(isOdd(A[i][j]))
            {   
                B[i][j] = opposite(B[i][j]);
                if(j < 2){
                    B[i][j+1] = opposite(B[i][j+1]);   
                }
                if(j > 0){
                    B[i][j-1] = opposite(B[i][j-1]);
                }
                if(i < 2){
                    B[i+1][j] = opposite(B[i+1][j]);
                }
                if(i > 0){
                    B[i-1][j] = opposite(B[i-1][j]);
                }                                     
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cout << B[i][j];
            
        }
        if(i < 2) cout << "\n";
    }

    return 0;

}