//kengkeng
#include <ios>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <cstdio>
#include <cwchar>
#include <iosfwd>
#include <limits>
#include <locale>
#include <memory>
#include <string>
#include <vector>
#include <cassert>
#include <ciso646>
#include <climits>
#include <clocale>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <cwctype>
#include <fstream>
#include <iomanip>
#include <istream>
#include <numeric>
#include <ostream>
#include <sstream>
#include <utility>
#include <iostream>
#include <iterator>
#include <valarray>
#include <algorithm>
#include <exception>
#include <stdexcept>
#include <streambuf>
#include <functional>

#define Maxn 100005
#define Maxm 5005
#define INF 0xffff;
#define ll long long
#define Exit exit(0);
#define Mod 1000000007
#define PI  3.1415926535898
#define Pause system("pause");
#define lson l, mid, rt << 1
#define rson mid + 1, r, rt << 1|1
#define debug puts("here is a BUG");
#define Clear(name, num) memset(name, num, sizeof(name));
using namespace std;

struct Index {
    int x;
    int y;
    int z;
}in[100];

int main(){
    int i, t, j, k, m, n;
    int res, sum, ans, key, len;
    int year, mon, day;
//    char str[Maxn];
//    int num[Maxn];

    double d, a1, an;
    double a[65];

#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    while(~scanf("%d%d",&n, &m)) {
        scanf("%lf%lf%lf",&d,&a[1],&a[n]);
        in[3].x = 1;in[3].y = -2;in[3].z = 2;
        in[4].x = -2;in[4].y = 5;in[4].z = -2;
        for(i = 5; i <= n; i++) {
            in[i].x = in[i-2].x-2*in[i-1].x;
            in[i].y = in[i-2].y-2*in[i-1].y;
            in[i].z = in[i-2].z-2*in[i-1].z + 2;
        }
        a[2] = (a[n]-(in[n].z*d)-(in[n].x*a[1]))/(1.0*in[n].y);
        for(i = 3; i <= n; i++) {
            a[i] = a[i-2] - 2.0*a[i-1] + 2.0*d;
        }
        printf("%.3lf\n",a[m]);
    }
return 0;
}
