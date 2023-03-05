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
    int n,i,p=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    int mi=a[0];
    for(i=1; i<n; i++) {
        if(a[i]<mi) {
            mi=a[i];
            p=i;
        }
    }
    cout<<p+1<<endl;
    return 0;
}
