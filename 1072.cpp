#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n,i,c=0,d=0;
    long int a;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        if(a>=10 and a<=20)
            c++;
        else
            d++;
    }
    cout<<c<<" in\n";
    cout<<d<<" out\n";
    return 0;
}
