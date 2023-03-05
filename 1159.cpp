#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int a,i,n=5,c=0,s=0;
    while(1) {
        cin>>a;
        if(a==0)
            return 0;
        while(c!=n) {
            if(a%2==0) {
                s+=a;
                c++;
            }
            a++;
        }
        cout<<s<<endl;
        s=0;
        c=0;
    }

}
