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
    int t;
    string s,x;
    cin>>t;
    cin.ignore();
    while(t--) {
        set<string>st;
        getline(cin,s);
        stringstream sst;
        sst<<s;
        while(!sst.eof()) {
            sst>>x;
            st.insert(x);
        }
        for(auto i=st.begin(); i!=st.end(); i++) {
            cout<<*i;
            if(i==--(st.end()))
                cout<<endl;
            else
                cout<<ss;
        }
        st.clear();
    }
    return 0;
}
