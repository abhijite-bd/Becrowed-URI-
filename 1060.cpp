#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    double a[6],c=0;
    for(int i=0; i<6; i++) {
        cin>>a[i];
        if(a[i]>0)
            c++;
    }
    cout<<c<<" valores positivos\n";
    return 0;
}
