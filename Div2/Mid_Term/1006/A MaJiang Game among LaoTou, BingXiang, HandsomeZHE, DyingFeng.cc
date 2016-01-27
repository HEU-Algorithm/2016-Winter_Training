
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
int cnt[35];
int maso[14]={0,8,9,17,18,26,27,28,29,30,31,32,33};

int f( char c )
{
    if( c>='1' && c<='9' ) return c-'1';
    if( c=='w' ) return 0;
    if( c=='t' ) return 9;
    if( c=='b' ) return 18;
    return 27;
}

char mspc( int x )
{
    if( x==0 ) return 'w';
    if( x==1 ) return 't';
    if( x==2 ) return 'b';
    return 'c';
}

bool judge4x3()
{
     int i,j,ret=0;
     int tem[34];
     for( i=0;i<34;i++ ) tem[i]=cnt[i];
     for( i=0;i<=18;i+=9 )
     for( j=0;j<9;j++ )
     {
          if( tem[i+j]>=3 )
              tem[i+j]-=3,ret++;
          while( j+2<9 && tem[i+j]&& tem[i+j+1]&& tem[i+j+2] )
                 tem[i+j]--,tem[i+j+1]--,tem[i+j+2]--,ret++;
     }
     i=27;
     for( j=0;j<7;j++ )
     {
          if( tem[i+j]>=3 )
              tem[i+j]-=3,ret++;
     }
     return ret==4?true:false;
}

bool judge1()
{
     for( int i=0;i<34;i++ )
     {
          if( cnt[i]>=2 )
          {
              cnt[i]-=2;
              if( judge4x3() )
              {
                  cnt[i]+=2;
                  return true;
              }
              cnt[i]+=2;
          }
     }
     return false;
}

bool judge2()//judge Chii Toitsu
{
     for( int i=0;i<34;i++ )
          if( cnt[i]!=2 && cnt[i]!=0 )
              return false;
     return true;
}

bool judge3()
{
     for( int i=0;i<7;i++ )
          if( cnt[i+27]==0 )
              return false;
     for( int i=0;i<=18;i+=9 )
     {
          if( cnt[i]==0 || cnt[i+8]==0 )
              return false;
          for( int j=1;j<8;j++ )
               if( cnt[i+j] )
                   return false;
     }
     return true;
}

bool judge()
{
     if( judge1() ) return true;
     if( judge2() ) return true;
     if( judge3() ) return true;
     return false;
}

int main()
{
    //freopen( "in.in","r",stdin );
    //freopen( "out.out","w",stdout );
    int T;
    scanf( "%d",&T );
    while( T-- )
    {
           char com[11];
           int rec[34],tot=0;
           memset( cnt,0,sizeof(cnt) );
           for( int i=0;i<13;i++ )
           {
                scanf("%s",com);
                cnt[f(com[0])+f(com[1])]++;
           }
           for( int i=0;i<34;i++ )
           {
                cnt[i]++;
                if( cnt[i]<=4 && judge() )
                    rec[tot++]=i;
                cnt[i]--;
           }
           if( tot==0 )
               {printf( "Nooten" );
               //return true;
               }
           else
           {
               printf( "%d",tot );
               for( int i=0;i<tot;i++ )
                    printf( " %d%c",rec[i]%9+1,mspc(rec[i]/9) );
           }
           printf( "\n" );
    }
    return 0;
    //return false;
}


/*
int main(){
    //freopen( "in.in","r",stdin );
    freopen( "in.in","w",stdout );
    int a=22000;
    char s[4]={'b','t','w','c'};
    int m[4][9],q[13][2];
    printf("22000\n1t 2t 3t 2c 2c 2c 2b 3b 5w 6w 7w 1b 1b\n1b 1b 2b 3b 4t 5t 6t 7c 7c 3t 3t 2w 2w\n1b 6b 4b 8b 8b 4b 8b 1b 1b 3b 5b 4b 4b\n1b 1b 1b 1b 2b 2b 2b 2b 3b 3b 3b 3b 4b\n");
    a--,a--,a--,a--,a/=3;
    while(a--){
        int ss=13,i,j;
        bool k=true;
        while(k){
            ss=13;
            memset(m,0,sizeof(m));
            memset(q,0,sizeof(q));
            memset( cnt,0,sizeof(cnt) );
            int p=0;
            while(ss){
                i=rand()*rand()%4;
                if(i<3){
                    j=rand()*rand()%9;
                } else {
                    j=rand()*rand()%7;
                }

                if(m[i][j]<4){
                    q[p][0]=i; q[p++][1]=j+1;
                    m[i][j]++;
                    cnt[j+f(s[i])]++;
                    ss--;
                }
            }
            if(!main1()) k=false;
        }
            for(int p=0;p<12;p++) printf("%d%c ",q[p][1],s[q[p][0]]);
            printf("%d%c\n",q[12][1],s[q[12][0]]);

            ss=13;
            while(ss){
                memset(m,0,sizeof(m));
                i=rand()*rand()%4;
                if(i<3){
                    j=rand()*rand()%9;
                } else {
                    j=rand()*rand()%7;
                }
                if(m[i][j]<4){
                    m[i][j]++;
                    printf("%d%c",j+1,s[i]);
                    if(--ss) printf(" ");
                }
            }
            printf("\n");

            ss=13;
            while(ss){
                memset(m,0,sizeof(m));
                i=rand()*rand()%4;
                if(i<3){
                    j=rand()*rand()%9;
                } else {
                    j=rand()*rand()%7;
                }
                if(m[i][j]<4){
                    m[i][j]++;
                    printf("%d%c",j+1,s[i]);
                    if(--ss) printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}
*/
