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
    int i=1,j=7;
    while(i<=9) {
        printf("I=%d J=%d\n",i,j);
        j--;
        if(j==4) {
            i+=2;
            j=7;
        }
    }
    return 0;
}
