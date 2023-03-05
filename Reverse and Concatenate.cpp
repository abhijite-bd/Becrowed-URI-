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
    int t,n,k;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        cin>>s;
        if(k==0)
            cout<<1<<endl;
        else {
            string s2=s;
            reverse(s2.begin(),s2.end());
            if(s==s2)
                cout<<1<<endl;
            else {
                cout<<2<<endl;
            }

        }
    }
    return 0;
}
