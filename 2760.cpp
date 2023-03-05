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
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    cout<<s1<<s2<<s3<<endl;
    cout<<s2<<s3<<s1<<endl;
    cout<<s3<<s1<<s2<<endl;
    if(s1.size()>10)
        s1=s1.substr(0,10);
    if(s2.size()>10)
        s2=s2.substr(0,10);
    if(s3.size()>10)
        s3=s3.substr(0,10);
    cout<<s1<<s2<<s3<<endl;
    return 0;
}
