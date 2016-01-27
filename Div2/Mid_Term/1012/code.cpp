//E
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define INF 0x3f3f3f3f
#define MAX 100000007
#define MOD 1000000007
#define EPS 1e-6
using namespace std;
#define N 11
int n,m;
int flag,sum,ave,ans,res,len,ans1,ans2;
int g[N][N];
void dfs(int x,int y,int now)
{
    res=max(res,now);
    int xx=x,yy=y;
    for(;xx<n;xx++)
    {
        for(;yy<m;yy++)
        {
            if(g[xx][yy]!=0)
                continue;
            flag=0;ans=1;
            for(int i=xx-1;ans&&i>=0;i--)
            {
                if(flag==1&&g[i][yy]==2)
                    ans=0;
                if(g[i][yy])
                    flag++;
            }
            flag=0;
            for(int i=yy-1;ans&&i>=0;i--)
            {
                if(flag==1&&g[xx][i]==2)
                    ans=0;
                if(g[xx][i])
                    flag++;
            }
            if(ans)
            {
                g[xx][yy]=2;
                dfs(xx,yy,now+1);
                g[xx][yy]=0;
            }
        }
        yy=0;
    }
}
int main()
{
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
    int i,j,k,kk,t,x,y,z,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&n,&m,&k);
        memset(g,0,sizeof(g));
        for(i=0;i<k;i++)
        {
            scanf("%d%d",&x,&y);
            g[x][y]=1;
        }
        res=0;
        dfs(0,0,0);
        printf("%d\n",res);
    }
    return 0;
}
