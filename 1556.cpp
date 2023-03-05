#include<bits/stdc++.h>
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
    set<string> st;
    string s,nst;
    int n,i,j,k;
    while(cin>>s) {
        n=s.size();
        j=1;
        for(i=0; i<s.size(); i++) {
            nst=s.substr(i,j);
            st.insert(nst);
//            cout<<nst<<endl;
            if(j==s.size())
                break;
            if(s.size()<=i+j) {
                j++;
                i=-1;
            }
        }
        for(auto e:st)
            cout<<e<<endl;
        st.clear();
    }
    return 0;
}
