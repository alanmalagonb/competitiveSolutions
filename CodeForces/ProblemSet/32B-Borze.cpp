#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string r;

    for(int i = 0; i < s.size()+1 ; i++)
    {
        if(s[i] == '.')
        {
            r += '0';
        }
        if(s[i] == '-' && s[i+1] == '.')
        {
            r += '1';
            i++;
        }
        if(s[i] == '-' && s[i+1] == '-')
        {
            r += '2';
            i++;
        }
    }
        
    
    cout << r << endl;

    return 0;
}