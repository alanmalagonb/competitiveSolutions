#include <bits/stdc++.h>

using namespace std;
//pack 1 = ties jackets
//pack 2 = scarves vests jackets

//Start creating packs of type 2
int case1(int ties,int scarves,int vests ,int jackets, int pack1, int pack2)
{
	int result = 0;
	
	int min_p2 = min({scarves,vests,jackets});
	result += pack2 * min_p2;
	jackets -= min_p2;

	int min_p1 = min(ties,jackets);
	result += pack1 * min_p1;

	return result;

}

//Start creating packs of type 1
int case2(int ties,int scarves,int vests ,int jackets, int pack1, int pack2){
	int result = 0;
	int min_p1 = min(ties,jackets);
	
	result += min_p1 * pack1;
	jackets -= min_p1;
	int min_p2 = min({scarves,vests,jackets});
	result += pack2 * min_p2;

	return result;
}

int main()
{
	int ties = 0, scarves = 0, vests = 0, jackets = 0;
	cin >> ties >> scarves >> vests >> jackets;
	int pack1 = 0, pack2 = 0;
	cin >> pack1 >> pack2;
	int result = max(case1(ties,scarves,vests,jackets,pack1,pack2),case2(ties,scarves,vests,jackets,pack1,pack2));

	cout << result << endl;

	return 0;
}