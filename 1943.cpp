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
    int n;
    cin>>n;
    cout<<"Top ";
    if(n<=1)
        cout<<1<<endl;
    else if(n<=3)
        cout<<3<<endl;

    else if(n<=5)
        cout<<5<<endl;

    else if(n<=10)
        cout<<10<<endl;

    else if(n<=25)
        cout<<25<<endl;

    else if(n<=50)
        cout<<50<<endl;
    else
        cout<<100<<endl;
    return 0;
}
