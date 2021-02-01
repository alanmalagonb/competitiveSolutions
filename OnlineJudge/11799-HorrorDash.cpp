#include <bits/stdc++.h>

using namespace std;

auto main() -> int {
    
    int n,t,s,max=0,c=0;
    cin >> n;
    
    while(n>0){
        cin >> t;
        while(t>0){
            cin >> s;
            if(s>max) max = s;
            t--;
        }
        
        c++;
        cout << "Case " << c << ": " << max << endl;
        max=0;
        n--;
    }

    return 0;
}

