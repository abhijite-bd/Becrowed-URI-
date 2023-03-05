#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int leapyear(int n)
{
    if(n%400==0)
        return 1;
    else if(n%4==0 and n%100!=0)
        return 1;
    else
        return 0;
}
int a[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[]= {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int t,i,j,k,y1,y2,m1,m2,d1,d2;
    cin>>t;
    while(t--) {
        scanf("%d-%d-%d %d-%d-%d",&y1,&m1,&d1,&y2,&m2,&d2)  ;
        int ans1=0,ans2=0;
        ans1=d1-d2;

    }
    return 0;
}
