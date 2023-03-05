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
    int n,i,t,k;
    cin>>t;
    for(k=0; k<t; k++) {
        cin>>n;
        ll a[n],sum=0;
        //0 1 1 2 3 5 8 13 21 34
        if(n==0)
            printf("Fib(0) = 0\n");
        else if(n==1)
            printf("Fib(1) = 1\n");
        else if(n==2)
            printf("Fib(2) = 1\n");
        else if(n==3)
            printf("Fib(3) = 2\n");
        else {
            a[0]=0;
            a[1]=1;
            a[2]=1;
            a[3]=2;

            for(i=2; i<n; i++) {
                a[i]=a[i-2]+a[i-1];
                if(i==n-1 or i==n-2)
                    sum+=a[i];
                if(i==n-1) {
                    printf("Fib(%d) = %lld\n",n,sum);
                    sum=0;
                }
            }
        }
    }
    return 0;
}
