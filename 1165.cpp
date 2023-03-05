#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,i,j,flag=0;
    long int a;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        for(j=2; j<a; j++) {
            if(a%j==0) {
                flag=1;
                break;
            }
        }
        flag==0?cout<<a<<" eh primo\n":cout<<a<<" nao eh primo\n";
        flag=0;
    }
    return 0;
}
