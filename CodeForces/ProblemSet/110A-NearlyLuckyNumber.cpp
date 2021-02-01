#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long nl;
    int count = 0; 
    
    cin >> nl;

    while (nl != 0)
    {
        if (nl % 10 == 4 || nl % 10 == 7) count ++;
        nl /= 10;
    }

    if(count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
	return 0;

}

