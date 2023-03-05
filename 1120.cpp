#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    string s;
    char n;
    int i,num,zero;
    while(1) {
        cin>>n>>s;
        if(n=='0' and s =="0")
            return 0;
        num=0;
        zero=0;
        for(i=0; i<s.size(); i++) {
            if(s[i]=='0')
                zero++;
            if(s[i]==n)
                num++;
        }
        if(num+zero==s.size())
            cout<<0<<endl;
        else {
            int flag=0;
            for(i=0; i<s.size(); i++) {
                if(s[i]=='0') {
                    if(flag)
                        cout<<s[i];
                }
                else if(s[i]!=n) {
                    flag=1;
                    cout<<s[i];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
