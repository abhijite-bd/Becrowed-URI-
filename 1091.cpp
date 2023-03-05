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
    int n,m,t,x,y,i;

    while(cin>>t and t!=0) {
        cin>>n>>m;
        for(i=0; i<t; i++) {
            cin>>x>>y;
            if(x>n and y>m)
                cout<<"NE"<<endl;
            else if(x<n and y>m)
                cout<<"NO"<<endl;
            else if(x<n and y<m)
                cout<<"SO\n";
            else if(x>n and y<m)
                cout<<"SE\n";
            else
                cout<<"divisa\n";

        }
    }
    return 0;
}
