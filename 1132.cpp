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
    int a,b,sum=0;
    cin>>a>>b;
    int mi=min(a,b);
    int mx=max(a,b);
    for(int i=mi; i<=mx; i++) {
        if(i%13!=0)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
