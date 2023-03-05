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
    int i=1,j=7,c=0;
    while(i<=9) {
        printf("I=%d J=%d\n",i,j);
        j--;
        c++;
        if(c==3) {
            i+=2;
            j+=5;
            c=0;
        }
    }
    return 0;
}
