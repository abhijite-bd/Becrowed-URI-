#include<iostream>
#include<math.h>
#include<ctype.h>
#include<algorithm>
#include<string.h>
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
//    cin.ignore();
    while(getline(cin,s)) {
        int n=0,l=0,d=0,p=1,u=0,i;
        n=s.size();
        if(n>=6 and n<=32) {
            for(i=0; i<n; i++) {
                if(isupper(s[i]))
                    u=1;
                else if(islower(s[i]))
                    l=1;
                else if(isdigit(s[i]))
                    d=1;
                else {
                    p=0;
                    break;
                }
            }

            if(u==1 and l==1 and d==1 and p==1)
                cout<<"Senha valida."<<endl;
            else
                cout<<"Senha invalida."<<endl;
        } else
            cout<<"Senha invalida."<<endl;
//        cin.ignore();
    }
    return 0;
}
//#include<string.h>
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//    char str[100];
//    while(gets(str)) {
//        bool x=false,y=false,z=false;
//        int length=strlen(str);
//        if(length<6||length>32)
//            cout<<"Senha invalida.\n";
//        else {
//            bool p=true;
//            for(int i=0; i<length; i++) {
//                if(str[i]>=65&&str[i]<=90)
//                    x=true;
//                else if(str[i]>=97&&str[i]<=122)
//                    y=true;
//                else if(str[i]>=48&&str[i]<=57)
//                    z=true;
//                else {
//                    p=false;
//                    break;
//                }
//            }
//            if(x&&y&&z&&p)
//                cout<<"Senha valida.\n";
//            else
//                cout<<"Senha invalida.\n";
//        }
//    }
//    return 0;
//}
