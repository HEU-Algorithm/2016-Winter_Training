
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>
using namespace std;

int v[6]= {1,5,10,50,100,500};
int a;
int c[6];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    int i;

    while (~scanf ("%d%d%d%d%d%d%d",&c[0],&c[1],&c[2],&c[3],&c[4],&c[5],&a)) {
        int ans=0;
        for (i=5; i>=0; i--)
        {
            int t=min(a/v[i],c[i]);
            a-=t*v[i];
            ans+=t;
        }
        printf("%d\n",ans);
    }
    return 0;
}
