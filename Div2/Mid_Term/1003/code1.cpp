#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int a[10000009];
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    int n;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=10000001;i++)
    {
        a[i]=(a[i-1]%mod+a[i-2]%mod)%mod;
    }
    while(~scanf("%d",&n))
    {
        printf("%d\n",a[n]);
    }
    return 0;
}
