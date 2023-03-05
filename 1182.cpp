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
    double a[12][12],s=0;
    int n,i,j;
    char c;
    cin>>n>>c;
    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            cin>>a[i][j];
            if(j==n)
                s+=a[i][j];
        }
    }
    if(c=='S')
        printf("%.1lf\n",s);
    else
        printf("%.1lf\n",s/12);
    return 0;
}
