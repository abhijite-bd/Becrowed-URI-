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
    int a,b,cng,i;

    int c[]= {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    while(cin>>a>>b and a!=0 and b!=0) {
        int f=0;
        cng=b-a;
        for(i=0; i<15; i++) {
            if(cng==c[i]) {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"possible\n";
        else
            cout<<"impossible\n";
    }
    return 0;
}
