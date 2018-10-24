#include<bits/stdc++.h>
#define sf(f)                            scanf("%lld",&f)
#define pf(f)                            printf("%lld\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

///int dx[]= {-1,-1,0,0,1,1};
///int dy[]= {-1,0,-1,1,0,1};
///int dx[]= {0,0,1,-1};                 /*4 side move*/
///int dy[]= {-1,1,0,0};                 /*4 side move*/
///int dx[]= {1,1,0,-1,-1,-1,0,1};       /*8 side move*/
///int dy[]= {0,1,1,1,0,-1,-1,-1};       /*8 side move*/
///int dx[]={1,1,2,2,-1,-1,-2,-2};       /*knight move*/
///int dy[]={2,-2,1,-1,2,-2,1,-1};       /*knight move*/
///Always Remember   'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

ll FIBO(ll n)
{
    if (n== 0)
    {
        return 0;
    }
    else if (n== 1)
    {
        return 1;
    }
    else
    {
        return(FIBO(n-1) + FIBO(n-2));
    }
}
///0,1,2,3,5,8,13.....

int main()
{
    ll n;
    sf(n);
    if (n< 0)
    {
        return 0;   ///negative not possible
    }
    else
    {
        pf(FIBO(n));
    }

    return 0;
}
