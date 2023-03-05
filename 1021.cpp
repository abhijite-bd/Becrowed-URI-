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
    double taka,ftaka;
    cin>>taka;
    int itaka=taka,a;
    ftaka=taka-itaka;
    cout<<"NOTAS:"<<endl;
    a=itaka/100;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    itaka-=a*100;

    a=itaka/50;
    cout<<a<<" nota(s) de R$ 50.00"<<endl;
    itaka-=a*50;
    a=itaka/20;
    cout<<a<<" nota(s) de R$ 20.00"<<endl;
    itaka-=a*20;
    a=itaka/10;
    cout<<a<<" nota(s) de R$ 10.00"<<endl;
    itaka-=a*10;
    a=itaka/5;
    cout<<a<<" nota(s) de R$ 5.00"<<endl;
    itaka-=a*5;
    a=itaka/2;
    cout<<a<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    itaka-=a*2;
    cout<<itaka<<" moeda(s) de R$ 1.00"<<endl;
    ftaka*=100;
    a=ftaka/50;
    cout<<a<<" moeda(s) de R$ 0.50"<<endl;
    ftaka-=a*50;
    a=ftaka/25;
    cout<<a<<" moeda(s) de R$ 0.25"<<endl;
    ftaka-=a*25;
    a=ftaka/10;
    cout<<a<<" moeda(s) de R$ 0.10"<<endl;
    ftaka-=a*10;
    a=ftaka/5;
    cout<<a<<" moeda(s) de R$ 0.05"<<endl;
    ftaka-=a*5;
    a=ftaka;
    cout<<a<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
