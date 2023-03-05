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
    string s;
    while(cin>>s) {
        int sum1=0,sum2=0,i,j,k;
        for(i=1,j=1,k=9; i<=9; i++,k--,j++) {
            cout<<s[i-1];
            sum1+=(s[i-1]-'0')*j;
            sum2+=(s[i-1]-'0')*k;
            if(i==3 or i==6)
                cout<<'.';
            else if(i==9)
                cout<<'-';
        }
        sum1%=11;
        sum2%=11;
        if(sum1==10)
            sum1=0;
        if(sum2==10)
            sum2=0;
        cout<<sum1<<sum2<<endl;
    }
    return 0;
}
