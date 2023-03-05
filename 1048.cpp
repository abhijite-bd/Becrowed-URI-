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
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    double sal,nsal,pro;
    int p;
    cin>>sal;
    if(sal<=400) {
        p=15;
        nsal=sal+sal*.15;
    } else if(sal<=800) {
        p=12;
        nsal=sal+sal*.12;
    } else if(sal<=1200) {
        p=10;
        nsal=sal+sal*.10;
    } else if(sal<=2000) {
        p=7;
        nsal=sal+sal*.07;
    } else {
        p=4;
        nsal=sal+sal*.04;
    }
    printf("Novo salario: %.2lf\n",nsal);
    printf("Reajuste ganho: %.2lf\n",nsal-sal);
    printf("Em percentual: %d %c\n",p,'%');
    return 0;
}
