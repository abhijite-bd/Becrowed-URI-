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
    int a,b,ans;
    char c;
    while(cin>>a>>c>>b) {
        if(a==7)
            ans=b;
        else if(a==8)
            ans=b+60;
        else if(a==9)
            ans=120;
        else
            ans=0;

        cout<<"Atraso maximo: "<<ans<<endl;
    }
    return 0;
}
