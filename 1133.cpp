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
    for(int i=mi+1; i<mx; i++) {
        if(i%5==2 or i%5==3)
            cout<<i<<endl;
    }
    return 0;
}

