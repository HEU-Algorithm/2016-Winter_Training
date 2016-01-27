//zhaoruifeng
#include <bits/stdc++.h>
int n,m;
int s[101][101];
int main()
{
    srand(123);
    int i,j,k,kk,cas,T,t,x,y,z,xx,yy;
    freopen("in.in","w",stdout);
    T=50;
    printf("%d\n",T);
    while(T--)
    {
        n=rand()%5+1;
        m=rand()%5+1;
        k=rand()%(n*m+1);
        printf("%d %d %d\n",n,m,k);
        memset(s,0,sizeof(s));
        for(i=0;i<k;i++)
        {
            x=rand()%n;y=rand()%m;
            while(s[x][y])
            {
                x=rand()%n;y=rand()%m;
            }
            s[x][y]=1;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j])
                {
                    printf("%d %d",i,j);
                    k--;
                    if(k)printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
