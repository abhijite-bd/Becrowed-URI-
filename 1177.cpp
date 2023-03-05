#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int i=0,n=1000,c=0;
    int t;
    cin>>t;
    while(n--) {
        printf("N[%d] = %d\n",c,i);
        i++;
        if(i==t)
            i=0;
        c++;
        if(c==1000)
            return 0;

    }

}
