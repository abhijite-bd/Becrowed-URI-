#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    string s;
    while(getline(cin,s) and s!="*") {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        stringstream ss;
        ss<<s;
        vector<string> v;
        string st;
        while(ss>>st) {
            v.pb(st);
        }
        char c=v[0][0];
        int flag=0,i;
        for(i=0; i<v.size(); i++) {
            if(v[i][0]!=c)
                flag=1;
        }
        if(flag)
            cout<<'N'<<endl;
        else
            cout<<'Y'<<endl;
    }
    return 0;
}
