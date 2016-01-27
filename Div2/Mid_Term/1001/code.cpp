#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    char str[201];
    char str2[7];
    int i, t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        memset(str,'\0',sizeof(str));
        gets(str);//ÊäÈë×Ö·û
        for(i = 0; str[i] != '\0'; i++)
        {
            if(str[i] >= 'G' && str[i] <= 'Z')
                str[i] -= 6;
            else if(str[i] >= 'A' && str[i] < 'G')
                str[i] += 20;
        }
        puts(str);
    }
    return 0;
}
