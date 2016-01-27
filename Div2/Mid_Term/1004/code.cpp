//MJRT
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
//////////////////////
#include<iostream>
#include<algorithm>
#include<string>
#include <iterator>
#include<sstream>
#include<functional>
#include<numeric>
///////////////////////
#include<vector>
#include<map>
#include <stack>
#include<queue>
#include<set>
#include <bitset>
#include <list>
///////////////////////
//#include<ext/pb_ds/priority_queue.hpp> //pd_bs¿â,hdu&&poj²»Ö§³Ö
using namespace std;
#define lowbit(x) ((x)&(-x))
static int INDEX = 0,BUGs = 0;
#define BUG() cout << "There is BUG No." << BUGs++ <<endl
#define Whats(x) cout << "{ "<< #x << " }" << " is " << "*** "<< x << " ***" << "  index:" << INDEX++ <<endl
#define Show(x,s,l)         cout << #x << ": "; for(int i = s ; i < s+l ; i++) cout << x[i] << " ";  cout << "\n"
typedef  long long int LL;
const int INF = ~0U>>1;

vector<int> a,b;

int main()
{
    //ios::sync_with_stdio(false);

    int n,t;
    while(1 == scanf("%d",&n))
    {
        a.clear();
        b.clear();
        for(int i = 0 ; i < n ; i++)
        {
           scanf("%d",&t);
           a.push_back(t);
        }
        sort(a.begin(),a.end());

        for( int i = 0,j = a.size()-1 ; i <= j ; i++,j--)
        {
            b.push_back(a[i]);
            b.push_back(a[j]);
            if(i == j ) b.pop_back();
        }

        for(int k = 0 ; k < b.size(); k++)
        {
            if(k) printf(" ");
            printf("%d",b[k]);
        }
        puts("");
    }
    return 0;
}


