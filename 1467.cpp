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
int main()
{
    int a,b,c,i,j,k;
    while(cin>>a>>b>>c) {
        if(a+b+c==0 or a+b+c==3)
            cout<<'*';
        else if((a==0 and b==1 and c==1)  or (a==1 and b==0 and c==0))
            cout<<'A';
        else if((a==1 and b==0 and c==1)  or (a==0 and b==1 and c==0))
            cout<<'B';
        else
            cout<<'C';
        cout<<endl;
    }
    return 0;
}
