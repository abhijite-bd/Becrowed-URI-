#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    string s;
    int n,i,hi,hb;
    while(getline(cin,s)) {
        n=s.size();
        hi=0;
        hb=0;
        for(i=0; i<n; i++) {
            if(s[i]=='_') {
                if(hi) {
                    cout<<"</i>";
                    hi=0;
                } else {
                    cout<<"</i>";
                    hi=1;
                }
            } else if(s[i]=='*') {
                if(hb) {
                    cout<<"</b>";
                    hb=0;
                } else {
                    cout<<"</b>";
                    hb=1;
                }
            } else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
