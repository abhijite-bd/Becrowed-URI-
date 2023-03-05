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
    ll pa,pb,t,i,p1,p2;
    double g1,g2;
    cin>>t;
    while(t--) {
        cin>>p1>>p2>>g1>>g2;
        pa=p1;
        pb=p2;
        for(i=0; i<101; i++) {
            if(pa>pb)
                break;
            pa+=pa*g1/100;
            pb+=pb*g2/100;
        }
        if(i<=100)
            cout<<i<<" anos."<<endl;
        else
            cout<<"Mais de 1 seculo."<<endl;
    }
    return 0;
}
