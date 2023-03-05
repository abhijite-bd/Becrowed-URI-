#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<=10000; i++) {
        if(i%n==2)
            cout<<i<<endl;
    }
    return 0;
}
