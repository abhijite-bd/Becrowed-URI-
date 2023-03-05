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
    double i=0,j=1,c=0,p=1,q=0;
    while(i<=2) {
        if(q==0 || q==5 || q==10)
            printf("I=%.lf J=%.lf\n",i,j);
        else
            printf("I=%.1lf J=%.1lf\n",i,j);
        j++;
        c++;
        if(c==3) {
            q++;
            i+=.2;
            j=1+q*.2;
            c=0;
        }
    }
    return 0;
}
