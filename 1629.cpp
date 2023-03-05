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
int digit_sum(int n)
{
    int sum=0;
    while(n!=0) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,i,zero,one,k;
    string s;
    while(cin>>n and n!=0) {
        for(k=0; k<n; k++) {
            cin>>s;
            zero=0;
            one=0;
            for(i=0; i<s.size(); i+=2) {
                zero+=(s[i]-'0');
            }
            for(i=1; i<s.size(); i+=2) {
                one+=(s[i]-'0');
            }
            cout<<digit_sum(zero)+digit_sum(one)<<endl;
        }
    }
    return 0;
}
