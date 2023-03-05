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
    int n,i,ans;
    int mx=-1;
    string st="";
    while(getline(cin,s) ) {
        if(s=="0"){
            cout<<endl;
            break;
        }
        else {

            n=s.size();
            ans=0;
            for(i=0; i<n; i++) {

                if(s[i]==' ') {
                    cout<<ans<<'-';
                    ans=0;
                } else  ans++;

                if(i==n-1) cout<<ans<<endl;

                if(mx<=ans) {
                    mx=ans;
                    st=s.substr(i-mx+1,mx);
                }
            }
        }
    }
    cout<<"The biggest word: "<<st<<endl;
    return 0;
}
