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
    int a[10],i,j,temp;
    for(i=0; i<10; i++) {
        cin>>a[i];
    }
    for(i=0; i<10; i++) {
        if(a[i]<=0)
            printf("X[%d] = 1\n",i);
        else
            printf("X[%d] = %d\n",i,a[i]);
    }
    return 0;
}
