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
    int n=9,i,a;
    cin>>a;
    for(i=0; i<=n; i++) {
        printf("N[%d] = %d\n",i,a);
        a=a*2;
    }
    return 0;
}
