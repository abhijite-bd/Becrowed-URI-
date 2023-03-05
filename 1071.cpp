#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,b,s=0,i;
    cin>>a>>b;
    int m=max(a,b);
    int n=min(a,b);
    for(i=n; i<m; i++) {
        if(i==m || i==n)
            continue;
        else {
            if(i%2!=0)
                s+=i;
        }
    }
    cout<<s<<endl;
    return 0;
}
