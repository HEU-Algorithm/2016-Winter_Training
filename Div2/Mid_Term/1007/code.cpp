//wkroach
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<queue>
#include<iostream>
using namespace std;

int m,n,b,t=1,temp,b2;
int volum,arr1[1000],arr2[1000];
double high,percent;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.in","r",stdin);
        freopen("out.out","w",stdout);
    #endif // ONLINE_JUDGE
    while(scanf("%d%d",&m,&n)==2)
    {
        if(m==0&&n==0) break;
        memset(arr1,0,sizeof(arr1));
        memset(arr2,0,sizeof(arr2));
        for(int i=0;i<m*n;++i)
            scanf("%d",&arr1[i]);
        arr1[m*n]=10000000;
        sort(arr1,arr1+m*n+1);
        for(int i=0;i<m*n;++i)
            arr2[i]=arr1[i+1]-arr1[i];
        scanf("%d",&volum);
        if(volum==0)
        {
            high=0.0;
            percent=0.0;
            goto there;
        }
        high=arr1[0];
        //for(int i=0;i<=m*n-1;++i) printf("%d ",arr2[i]);
        for(b=1;b<=m*n;++b)
        {
            b2=b-1;
            temp=b*arr2[b2]*100;
            //printf("%f %d %d %d\n\n",high,volum,arr2[b2],volum-temp);
            if(volum>temp)
            {
                volum-=temp;
                high+=(double)arr2[b2];
                continue;
            }
            if(volum==temp)
            {
                high+=(double)arr2[b2];
                break;
            }
            if(volum<temp)
            {
                high+=(double)((double)volum/(double)(b*100.00));
                break;
            }
        }
        percent=(double)((double)b/(double)(m*n))*100.0;
        //printf("%d %f\n\n",b,percent);
        there:
        printf("Region %d\nWater level is %.2lf meters.\n%.2lf percent of the region is under water.\n\n",t++,high,percent);
    }
    return 0;
}
