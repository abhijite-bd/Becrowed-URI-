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
    int n,i,mx,mi,a,b,sum=0,j;
    while(1) {
        cin>>a>>b;
        if(a<=0 or b<=0)
            return 0;
        mi=min(a,b);
        mx=max(a,b);
        for(i=mi; i<=mx; i++) {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
        sum=0;
    }
    return 0;
}

