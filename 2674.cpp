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
int prime(int n)
{
    if(n==1 or n==0)
        return 0;

    int i;
    for(i=2; i*i<=n; i++) {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i,flag,r;
    while(cin>>n) {
        flag=prime(n);//flag=1;
        if(flag) {
            flag=1;
            while(n!=0) {
                r=n%10;//4
                flag=prime(r);
                if(flag==0)
                    break;
                n/=10;//4
            }//flag=0
            if(flag)
                cout<<"Super\n";
            else
                cout<<"Primo\n";
        } else
            cout<<"Nada\n";
    }
    return 0;
}
