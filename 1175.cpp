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
    int i,j;
    int a[20],temp;
    for(i=0; i<20; i++) {
        cin>>a[i];
    }
    for(i=0, j=19; i<10; i++, j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0; i<20; i++) {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}


