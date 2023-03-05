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
    int i;
    double a;
    for(i=0; i<100; i++) {
        cin>>a;
        if(a<=10)
            printf("A[%d] = %.1lf\n",i,a);
    }
    return 0;
}

