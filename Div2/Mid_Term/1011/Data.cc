#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.in", "w", stdout);
#endif
    srand(time(NULL));
    int T =1000;
    while(T--) {
        int a[6] = {1, 5, 10, 50, 100, 500};
        vector<int> v;
        int sum = 0;
        for(int i = 0; i < 6; i++) {
            int tmp = rand() % 10000;
            cout << tmp << " ";
            sum += tmp;
            while(tmp--) {
                v.push_back(a[i]);
            }
        }
        int res = 0;
        int n = rand() % sum + 1;
        while(n--) {
            res += v[rand() % sum];
        }
        cout << res << endl;
    }
    return 0;
}
