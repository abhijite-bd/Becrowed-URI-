#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    int a,b,c,d,e,f,t,sa=0,sd=0,ss=0,sas=0,sds=0,sss=0;
    string s;
    cin>>t;
    while(t--) {
        cin>> s;
        cin>>a>>b>>c>>d>>e>>f;
        ss+=  a;
        sd+= b;
        sa+= c;
        sss+=d;
        sds+=e;
        sas+=f;
    }
    printf("Pontos de Saque: %.2lf %c.\n",sss*100.00/ss,'%');
    printf("Pontos de Bloqueio: %.2lf %c.\n",sds*100.00/sd,'%');
    printf("Pontos de Ataque: %.2lf %c.\n",sas*100.00/sa,'%');
    return 0;
}
