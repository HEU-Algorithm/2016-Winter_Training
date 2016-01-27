// code.cc
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


int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    int n,t,num[30]= {1,2,2,4,6,6,8,10,14,20,26,34,46,62,78,102,134,176,226,302,408,528,678,904,1182,1540,2012,2606,3410,4462};
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        printf("%d\n",num[n-1]);
    }
return 0;
}

