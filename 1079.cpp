#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    double a,b,c,s;
    int i,n;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b>>c;
        s=a*2+b*3+c*5;
        printf("%.1lf",s/10);
        cout<<endl;
    }
    return 0;
}
