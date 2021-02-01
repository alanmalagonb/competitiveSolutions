#include <bits/stdc++.h>

using namespace std;

int main(){
    int year, a ,b, c, d; 
    cin >> year;
    for(int i = 1000; i <= 9000; i++)
    {
        year++;
        a = (year/1000)%10;
        b = (year/100)%10;
        c = (year/10)%10;
        d = (year/1)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}