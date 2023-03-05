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
    int n,m;
    cin>>n>>m;
    if(m<=2)
        cout<<"nova"<<endl;
    else if((m>=97 and m<=100))
        cout<<"cheia"<<endl;
    else {
        if(n>=m)
            cout<<"minguante"<<endl;
        else
            cout<<"crescente"<<endl;
    }
    return 0;
}
// if((n>=3 and n<=96) and (m>=3 and m<=96))
