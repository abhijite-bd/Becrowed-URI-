#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int a[101],mx=0,m,i;
    for(i=1; i<=100; i++) {
        cin>>a[i];
        if(a[i]>mx) {
            mx=a[i];
            m=i;
        }
    }
    cout<<mx<<endl<<m<<endl;
    return 0;
}
