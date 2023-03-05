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
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int d=a[0], b=a[1], c=a[2];
    sort(a,a+3);
    if(a[1]==d)
        cout<<"huguinho"<<endl;
    if(a[1]==b)
        cout<<"zezinho"<<endl;
    if(a[1]==c)
        cout<<"luisinho"<<endl;
    return 0;
}
