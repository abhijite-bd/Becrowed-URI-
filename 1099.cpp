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
    cin>>n;
    for(j=0; j<n; j++) {
        cin>>a>>b;
        mi=min(a,b);
        mx=max(a,b);
        for(i=mi+1; i<mx; i++) {
            if(i%2==1)
                sum+=i;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
