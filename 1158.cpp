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
    int n,i,t,c=0,p,s=0,j;
    cin>>t;

    for(j=0; j<t; j++) {
        cin>>p>>n;

        i=p;
        while(c!=n) {
            if(i%2!=0) {
                s+=i;
                c++;
            }
            i++;
        }
        cout<<s<<endl;
        s=0;
        c=0;
    }


    return 0;
}

