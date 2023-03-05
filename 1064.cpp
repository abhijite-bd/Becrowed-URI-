#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    double a[6],s=0,p=0;
    for(int i=0; i<6; i++) {
        cin>>a[i];
        if(a[i]>0) {
            s+=a[i];
            p++;
        }
    }
    cout<<p<<" valores positivos\n";
    printf("%.1lf\n",s/p);
    return 0;
}
