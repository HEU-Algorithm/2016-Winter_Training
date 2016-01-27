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
	puts("3 2\n1.523 1.322 5.366\n53 23\n0.543 1.213 9768.134");
	int T = 10;
	int i;
	// cout << T + 3 << endl;
	while(T--) {
		int n = rand() % 10 + 1;
		int m = rand() % 10 + 1;
		if(n<m) {
            T++;
            continue;
		}
		cout << n <<" "<<m<<endl;
		int index = rand()%2;
		cout << index<<".";
		for(i = 0; i < 3; i++){
            int index = rand()%10;
            cout << index;
		}
        cout <<" ";
		index = rand()%2;
		cout << index<<".";
		for(i = 0; i < 3; i++){
            int index = rand()%10;
            cout << index;
		}
        cout <<" ";
        index = rand()%1000;
		cout << index<<".";
		for(i = 0; i < 3; i++){
            int index = rand()%10;
            cout << index;
		}
        cout <<endl;
	}
	return 0;
}
