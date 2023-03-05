#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    int n;
    cin>>n;
    int s[]= {3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6};
    int s2[]= {3,6,6,5,5,5,7,6,6,11};
//    for(n=1;n!=101;n++)
//    {
    if(n<=20)
        cout<<s[n-1]<<endl;
    else if(n<30)
        cout<<1+s[n%10-1]+6<<endl;
    else if(n%10==0)
        cout<<s2[n/10-1]<<endl;
    else if(n<40)
        cout<<1+s[n%10-1]+6<<endl;
    else if(n<50)
        cout<<1+s[n%10-1]+5<<endl;
    else if(n<60)
        cout<<1+s[n%10-1]+5<<endl;
    else if(n<70)
        cout<<1+s[n%10-1]+5<<endl;
    else if(n<80)
        cout<<1+s[n%10-1]+7<<endl;
    else if(n<90)
        cout<<1+s[n%10-1]+6<<endl;
    else if(n<100)
        cout<<1+s[n%10-1]+6<<endl;
//    }
    return 0;
}
