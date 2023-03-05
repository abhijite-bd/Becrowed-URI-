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
    int n,t,i,j,k,l;
    cin>>n;
    map<string,string>m;
    string x,y;
    cin.ignore(100,'\n');
    for(i=0; i<n; i++) {
        getline(cin,x);
        getline(cin,y);
        m[x]=y;
    }
    cin>>t;
    cin.ignore(100,'\n');
    for(i=0; i<t; i++) {
        if(i != 0) cout << endl;
        getline(cin,x);
        getline(cin,y);
        cout<<x<<endl;
        cout<<m[y]<<endl;
    }
    cout<<endl;
    return 0;
}
