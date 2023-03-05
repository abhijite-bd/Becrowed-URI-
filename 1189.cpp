#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    double a[12][12],sum=0;
    int i,j;
    char c;
    cin>>c;
    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin>>a[i][j];
        }
    }

    for(i=0; i<11; i++) {
        for(j=0; j<min(i,11-i); j++) {
            sum+=a[i][j];
        }
    }


    if(c=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);

    return 0;
}
