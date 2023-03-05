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
    int i,total=0,a[9],n=9;
    for(i=0; i<n; i++) {
        cin>>a[i];
        total+=a[i];
    }
    int ans = total%9;
    if(ans==1)
        cout<<"Dasher";
    if(ans==2)
        cout<<"Dancer";
    if(ans==3)
        cout<<"Prancer";
    if(ans==4)
        cout<<"Vixen";
    if(ans==5)
        cout<<"Comet";
    if(ans==6)
        cout<<"Cupid";
    if(ans==7)
        cout<<"Donner";
    if(ans==8)
        cout<<"Blitzen";
    if(ans==0)
        cout<<"Rudolph";
    cout<<endl;
    return 0;
}
