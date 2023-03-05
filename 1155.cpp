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
    double n,i,s=0;
    for(i=1; i<101; i++) {
        s+=1/i;
    }
    printf("%.2lf\n",s);
    return 0;
}
