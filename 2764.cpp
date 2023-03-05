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
    string s;
    cin>>s;
    string s1=s.substr(0,2);
    string s2=s.substr(3,2);
    string s3=s.substr(6,2);
    cout<<s2<<'/'<<s1<<'/'<<s3<<endl;
    cout<<s3<<'/'<<s2<<'/'<<s1<<endl;
    cout<<s1<<'-'<<s2<<'-'<<s3<<endl;

    return 0;
}

