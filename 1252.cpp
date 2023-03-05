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
int m;
bool cmp(int a,int b)
{
    if(a%m==b%m) {
        if(abs(a)%2==abs(b)%2) {
            if(a%2==0)
                return b>a;
            else
                return a>b;
        }
        return abs(a)%2>abs(b)%2;
    }
    return a%m<b%m;
}
int main()
{
    int n,i,j;
    while(cin>>n>>m) {
        cout<<n<<ss<<m<<endl;
        if(n==0)
            return 0;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n,cmp);
        for(i=0; i<n; i++) {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
