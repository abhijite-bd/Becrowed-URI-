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
    string s,s1="",s2="",s3="";
    while(getline(cin,s)) {
        int n2,n3,i,n;
        s2="",s3="";
        n=s.size();
        if(s[0]=='R') {
            for(i=2; i<n; i++) {
                if(s[i]=='=')
                    break;
                s2+=s[i];
            }
            for(i=i+1; i<n; i++) {
                s3+=s[i];
            }
//            cout<<s2<<ss<<s3<<endl;
            n2=stoi(s2,nullptr,0);
            n3=stoi(s3,nullptr,0);
            cout<<n3-n2<<endl;
        } else if(s[n-1]=='J') {
            for(i=0; i<n; i++) {
                if(s[i]=='+')
                    break;
                s2+=s[i];
            }
            for(i=i+1; i<n; i++) {
                if(s[i]=='=')
                    break;
                s3+=s[i];
            }
//            cout<<s2<<ss<<s3<<endl;
            n2=stoi(s2,nullptr,0);
            n3=stoi(s3,nullptr,0);
            cout<<n3+n2<<endl;
        } else {
            for(i=0; i<n; i++) {
                if(s[i]=='+')
                    break;
                s2+=s[i];
            }
            for(i=i+3; i<n; i++) {
                s3+=s[i];
            }
//            cout<<s2<<ss<<s3<<endl;
            n2=stoi(s2,nullptr,0);
            n3=stoi(s3,nullptr,0);
            cout<<n3-n2<<endl;
        }
    }
    return 0;
}
