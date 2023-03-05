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
    double t;
    cin>>t;
    while(n--) {
        printf("N[%d] = %.4lf\n",c,t);
        t=t/2;
        c++;
        if(c==100)
            return 0;

    }
}

