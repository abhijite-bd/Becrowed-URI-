#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int i,n,b=2;double a;
    cin>>n;
    for(i=2; i<=n; i++) {
        if(i%2==0) {
            a=i*i;
            printf("%d^%d = %.0lf\n",i,b,a);
        }

    }
    return 0;
}
