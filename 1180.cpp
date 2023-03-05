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
    int n,i,mi;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    mi=a[0];
    int    p=0;
    for(i=0; i<n; i++) {
        if(mi>a[i]) {
            p=i;
            mi=a[i];
        }
    }
    printf("Menor valor: %d\n",mi);
    printf("Posicao: %d\n",p);
    return 0;
}
