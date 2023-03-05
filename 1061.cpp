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
    char dia[10],h[2],m[2],s[2];
    int d1,m1,s1,h1;

    cin>>dia>>d1;
    cin>>h1>>h>>m1>>m>>s1;
//    cout<<d1<<endl;
//    cout<<h1<<endl;
//    cout<<m1<<endl;
//    cout<<s1<<endl;


    int d2,m2,s2,h2;
    cin>>dia>>d2;
    cin>>h2>>h>>m2>>m>>s2;
//    cout<<d2<<endl;
//    cout<<h2<<endl;
//    cout<<m2<<endl;
//    cout<<s2<<endl;

    int day,mn,sc,hour;
    sc=s2-s1;
    if(sc<0) {
        sc+=60;
        m1++;
    }
    mn=m2-m1;
    if(mn<0) {
        mn+=60;
        h1++;
    }
    hour=h2-h1;
    if(hour<0) {
        hour+=24;
        d1++;
    }
    day=d2-d1;
    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s)"<<endl;
    cout<<mn<<" minuto(s)"<<endl;
    cout<<sc<<" segundo(s)"<<endl;
    return 0;
}
