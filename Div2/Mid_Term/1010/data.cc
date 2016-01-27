// data.cc
#include <bits/stdc++.h>
#define LL long long
#define lson l, m, rt<<1
#define rson m+1, r, rt<<1|1
#define PI 3.1415926535897932626
#define EXIT exit(0);
#define PAUSE system("pause");
#define DEBUG puts("Here is a BUG");
#define SYNC_CLOSE ios::sync_with_stdio(false);
#define what_is(x) cout << #x << " is " << x << endl;
#define CLEAR(name, init) memset(name, init, sizeof(name));
const double eps = 1e-8;
const int MAXN = (int)1e9 + 5;
using namespace std;


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.in", "w", stdout);
#endif
    srand(unsigned(time(NULL)));
	puts("168 168 168\n180 160 170\n200 168 169\n200 169 200");
	int T = 100;
	int i;
	// cout << T + 3 << endl;
	while(T--) {
		int n = rand() % 300;
		int m = rand() % 300;
		int k = rand() % 300;
		cout <<n <<" " << m <<" "<<k <<endl;
	}
	return 0;
}
