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
        int n=s.size();
        for(i=0,j=1,k=9; i<n; i++,k--,j++) {
            if(s[i]=='.') {
                k++;
                j--;
                continue;
            }
            if(s[i]=='-')
                break;
            sum1+=(s[i]-'0')*j;
            sum2+=(s[i]-'0')*k;
//        cout<<sum1<<ss<<sum2<<endl;
        }
        sum1%=11;
        sum2%=11;
        if(sum1==10)
            sum1=0;
        if(sum2==10)
            sum2=0;
        if(sum2==(s[n-1]-'0') and sum1==(s[n-2]-'0'))
            cout<<"CPF valido"<<endl;
        else
            cout<<"CPF invalido"<<endl;

    }
    return 0;
}
