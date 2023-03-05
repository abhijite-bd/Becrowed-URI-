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
    int t,n,i,j,total,pre,ab,doc;
    string st;
    cin>>t;
    while(t--) {
        int x=0;
        cin>>n;
        string s[n];
        int a[n];
        for(i=0; i<n; i++) {
            cin>>s[i];
        }
        for(i=0; i<n; i++) {
            cin>>st;
            pre=0;
            ab=0;
            doc=0;
            for(j=0; j<st.size(); j++) {
                if(st[j]=='P')
                    pre++;
                else if(st[j]=='A')
                    ab++;
                else
                    doc++;
            }
            total=pre*100/(pre+ab-doc);
//            cout<<pre<<ss<<ab<<ss<<total<<endl;
            if(total<75) {
                if(x)
                    cout<<" ";
                cout<<s[i];
                x=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
