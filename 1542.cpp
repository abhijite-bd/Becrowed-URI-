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
    int n,m,d,p,x;
    while(cin>>x and x!=0) {
        cin>>d>>p;
        n=(p*d*x)/(p-x);
        if(n>1)
            cout<<n<<" paginas"<<endl;
        else
            cout<<n<<" pagina"<<endl;
    }
    return 0;
}
