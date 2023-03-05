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
    int a,n,i,flag=0;
    cin>>a>>n;
    int b[n];
    for(i=0; i<n; i++) {
        cin>>b[i];
    }
    for(i=0; i<n-1; i++) {
        int g=abs(b[i]-b[i+1]);
        if(g>a)
            flag=1;
    }
    if(flag)
        cout<<"GAME OVER\n";
    else
        cout<<"YOU WIN\n";
    return 0;
}
