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
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(a+b==0)
            cout<<"PROXYCITY"<<endl;
        if(a+b==1)
            cout<<"P.Y.N.G."<<endl;
        if(a+b==2)
            cout<<"DNSUEY!"<<endl;
        if(a+b==3)
            cout<<"SERVERS"<<endl;
        if(a+b==4)
            cout<<"HOST!"<<endl;
        if(a+b==5)
            cout<<"CRIPTONIZE"<<endl;
        if(a+b==6)
            cout<<"OFFLINE DAY"<<endl;
        if(a+b==7)
            cout<<"SALT"<<endl;
        if(a+b==8)
            cout<<"ANSWER!"<<endl;
        if(a+b==9)
            cout<<"RAR?"<<endl;
        if(a+b==10)
            cout<<"WIFI ANTENNAS"<<endl;
    }
    return 0;
}
