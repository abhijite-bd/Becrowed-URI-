#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d",i,n,i*n);
        cout<<endl;
    }
    return 0;
}
