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
    string s;
    int i,zero,t,flag,n;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;
        zero=0;
        for(i=0; i<n; i++) {
            zero+=s[i]=='0';
        }
        if(zero==1)
            cout<<"BOB\n";
        else {
            if(zero%2==1)
                cout<<"ALICE\n";
            else
                cout<<"BOB\n";
        }
    }
    return 0;
}
