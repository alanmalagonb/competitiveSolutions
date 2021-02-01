#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a; cin >> a;
    int u=0,l=0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == tolower(a[i])){
            l++;
        }else{
            u++;
        }
    }

    if(u > l){
        for(int i = 0; i < a.size(); i++){
            a[i] = toupper(a[i]);
        }
    }else{
        for(int i = 0; i < a.size(); i++){
            a[i] = tolower(a[i]);
        }
    }

    cout << a << endl;

	return 0;
}

