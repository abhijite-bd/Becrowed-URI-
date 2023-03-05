#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    ll i,n=s.size();
    for(i=0; i<n; i++) {
        if(s[i]=='.') {
            for(i=i+1; i<n; i++) {
                if(s[i]!='0'){
                    s2=s.substr(i,n-i);
                    break;
                }
            }
            break;
        } else {
            s1=s.substr(0,i+1);
        }
    }
    cout<<s2<<'.'<<s1<<endl;
    return 0;
}
