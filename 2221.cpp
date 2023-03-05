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


    int t,b,g,d,a1,a2,d1,d2,l1,l2;
    cin>>t;
    while(t--) {
        cin>>b;
        cin>>a1>>d1>>l1;
        cin>>a2>>d2>>l2;
        d=(a1+d1)/2;
        g=(a2+d2)/2;
        if(l1%2==0)
            d+=b;
        if(l2%2==0)
            g+=b;
//            cout<<d<<endl;
//            cout<<g<<endl;
        if(d==g)
            cout<<"Empate"<<endl;
        else if(d>g)
            cout<<"Dabriel"<<endl;
        else if(d<g)
            cout<< "Guarte"<<endl;
    }
    return 0;
}
