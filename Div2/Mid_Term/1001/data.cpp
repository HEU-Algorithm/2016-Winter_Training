#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("in.in", "r", stdin);
    freopen("in.in", "w", stdout);
#endif
    char c[200]= {'~','!','`','#','$',
                  '%','^','&','*','(',
                  ')','_','+','-','=',
                  '[',']','{','}','\\',
                  '|',';',':','/','?',
                  '.','>',',','<',' ',
                 };
    for(int i=30; i<40; i++) c[i]='0'+i-30;
    for(int i=40; i<66; i++) c[i]='A'+i-40;
    for(int i=66; i<92; i++) c[i]='a'+i-66;

    int len=rand()*rand()%200;
    printf("500\n");
    int T=497;
    printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\nSE JGXROTM HOTMDOGTM, O IGTUZ KDOYZ COZNUAZ EUA~\nSE NKGXZ OY COZN EUA\n");
    while(T--)
    {
        for(int i=0; i<len; i++)
        {
            printf("%c",c[rand()*rand()%92]);
        }
        printf("\n");
    }
    return 0;
}


