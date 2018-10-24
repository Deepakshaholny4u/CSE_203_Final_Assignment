#include<bits/stdc++.h>
#define sf(f)                            scanf("%d",&f)
#define pf(f)                            printf("%d\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)
#define onel(x)                          __builtin_popcountl(x)
#define onell(x)                         __builtin_popcountll(x)
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

void INSERT(char* txt,char* str, int n)
{
    char strng[size];
    int i=0,j=0,k=0;

    while(txt[i] != '\0')
    {
        if(i==n-1)
        {
            while(str[k] != '\0')
            {
                strng[j] = str[k];
                j++;
                k++;
            }
            int l=strlen(str);
            if(k==l)
            {
                strng[j]=txt[n];
                j++;
            }
        }
        else
        {
            strng[j] =txt[i];
            j++;
        }
        i++;
    }
    strng[j]='\0';
    puts(strng);
}
int main()
{
    char text[]="AAAAA",str1[]="BBB";
    int p1=1, p2=3, p3=6;
    INSERT(text,str1,p1);
    cout<<endl;
    INSERT(text,str1,p2);
    cout<<endl;
    INSERT(text,str1,p3);
    cout<<endl;
    return 0;
}
