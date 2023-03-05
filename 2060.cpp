#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int i,n,a2=0,a3=0,a4=0,a5=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        if(a[i]%2==0)
            a2++;
        if(a[i]%3==0)
            a3++;
        if(a[i]%4==0)
            a4++;
        if(a[i]%5==0)
            a5++;
    }
    cout<<a2<<" Multiplo(s) de 2"<<endl;
    cout<<a3<<" Multiplo(s) de 3"<<endl;
    cout<<a4<<" Multiplo(s) de 4"<<endl;
    cout<<a5<<" Multiplo(s) de 5"<<endl;
    return 0;
}
