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

LL random(LL l, LL r) {
	return l + (r - l)*rand()*1.0/(RAND_MAX + 1.);
}

LL pow10(int n) {
	LL res = 1;
	while(n--) {
		res*= 10;
	}
	return res;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.in", "w", stdout);
#endif
    srand(unsigned(time(NULL)));

	int T = 89;
	 cout << T + 5  << endl;
    puts("1996/1/1 1996/1/2\n1996/1/7 1997/1/7\n1996/2/1 1996/3/1\n1900/2/1 1901/2/1\n2000/1/20 2005/3/4\n1996/2/29 1996/3/1");
	while(T--) {
		int year1 = rand() % 1000 + 1000;
		int year2 = rand() % 1000 + year1;
		int m1 = rand() % 12 + 1;
		int m2 = rand() % 12 + 1;
		int d1 = rand() % 28 + 1;
		int d2 = rand() % 28 + 1;
		cout << year1 << "/" << m1 << "/" << d1 << " ";
		cout << year2 << "/" << m2 << "/" << d2 << endl;

	}
	return 0;
}
