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
int i,mxn,mnn,carry,sum;
string ans="";
void add(string s1,string s2)
{

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());


    carry=0;
    for(i=0; i<s2.size(); i++) {
        sum=(s1[i]-'0')+(s2[i]-'0')+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
    }

    for(i=s2.size(); i<s1.size(); i++) {
        sum=(s1[i]-'0')+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
    }
    if(carry!=0)
        ans+=to_string(carry);
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
//void subtract(string s1,string s2)
//{
//    string ans;
//    cout<<s1<<'-'<<s2<<endl;
//    reverse(s1.begin(),s1.end());
//    reverse(s2.begin(),s2.end());
//    mxn=max(s1.size(),s2.size());
//    mnn=min(s1.size(),s2.size());
//    if(mxn!=s1.size())
//        swap(s1,s2);
//    for(i=0; i<n; i++) {
//
//    }
//}
//void multiplication(string s1,string s2)
//{
//    reverse(s1.begin(),s1.end());
//
//
//    int n2=stoi(s2);
//    carry=0;
//    for(i=0; i<s1.size(); i++) {
//        sum=(s1[i]-'0')*n2+carry;
//        ans+=to_string(sum%10);
//        carry=sum/10;
//    }
//    if(carry!=0)
//        ans+=to_string(carry);
//    reverse(ans.begin(),ans.end());
//    cout<<ans<<endl;
//}
//string fac(string s,int n)
//{
//    string ans="";
//    reverse(s.begin(),s.end());
//    carry=0;
//    for(i=0; i<s.size(); i++) {
//        sum=(s[i]-'0')*n+carry;
//        ans+=to_string(sum%10);
//        carry=sum/10;
//    }
//    while(carry!=0) {
//        sum=carry%10;
//        ans+=to_string(sum);
//        carry/=10;
//    }
//
//    reverse(ans.begin(),ans.end());
//    return ans;
//}
string fibonacci(string s1,string s2)
{
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    if(s1.size()<s2.size())
        swap(s1,s2);
    carry=0;
    string ans="\0";
    for(i=0; i<s2.size(); i++) {
        sum=(s1[i]-'0')+(s2[i]-'0')+carry;
        ans+=to_string(sum%10);
        carry=sum/10;
    }
    for(i=s2.size(); i<s1.size(); i++) {
        sum=carry+(s1[i]-'0');
        ans+=to_string(sum%10);
        carry=sum/10;
    }
    if(carry)
        ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
//    string s1,s2;
//    cin>>s1>>s2;
//    mnn=min(s1.size(),s2.size());
//    mxn=max(s1.size(),s2.size());
//    if(mxn!=s1.size())
//        swap(s1,s2);
//    add(s1,s2);
//    subtract(s1,s2);
//    multiplication(s1,s2);
    while(1) {

        int n;
        cin>>n;
        int i;
//        string factorial="1";
//        for(i=1; i<=n; i++) {
//            factorial=fac(factorial,i);
//        }
//        cout<<factorial<<endl;
        vector<string>fibo(n);
        fibo[0]="1";
        fibo[1]="1";
        for(i=2; i<n; i++) {
            fibo[i]=fibonacci(fibo[i-1],fibo[i-2]);
        }
        cout<<fibo[n-1]<<endl;
    }
    return 0;
}
