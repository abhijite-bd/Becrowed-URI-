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
    int a;
    cin>>a;
    if(a>=86)
        cout<<'A'<<endl;
    else if(a>=61)
        cout<<'B'<<endl;
    else if(a>=36)
        cout<<'C'<<endl;
    else if(a>=1)
        cout<<'D'<<endl;
    else
        cout<<'E'<<endl;
    return 0;
}
