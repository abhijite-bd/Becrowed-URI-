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
    int i,n,j,ans;
    string s;
    while(cin>>s) {
        string st;
        n=s.size();
        for(i=0; i<n; i++) {
            if(s[i]=='B')
                st+='S';
            else    if(s[i]=='S')
                st+='B';
            else if(s[i]=='C')
                st+='F';
            else
                st+='C';
        }
        ans=0;
        stack<char>stk;
        for(i=0; i<n; i++) {
            if(stk.empty() or (stk.top()!=st[i]))
                stk.push(s[i]);
            else {
                while(true) {
                    if(stk.empty()) {
                        i--;
                        break;
                    }
                    if(stk.top()==st[i]) {
                        ans++;
                        stk.pop();
                        i++;
                    } else {
                        i--;
                        break;
                    }
                    if(i>=st.size())
                        break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
