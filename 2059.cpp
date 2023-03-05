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
    int p,j1,j2,r,a,f;
    cin>>p>>j1>>j2>>r>>a;
    int sum=j1+j2;
    if((sum%2==0 and p==1) or (sum%2==1 and p==0))
        f=1;
    else
        f=2;
    if((r==1 and a==0) or (r==0 and a==1))
        f=1;
    else if(r==1 and a==1)
        f=2;
    if(f==1)
        cout<<"Jogador 1 ganha!"<<endl;
    else
        cout<<"Jogador 2 ganha!"<<endl;
    return 0;
}
