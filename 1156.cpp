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
    double n,i,s=1,j;
    for(i=3,j=2; i<40; i+=2) {
//        cout<<i<<'/'<<j<<" ";
        s+=i/j;
        j*=2;
    }
    printf("%.2lf\n",s);
    return 0;
}

