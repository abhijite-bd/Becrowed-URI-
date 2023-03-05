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
    int i,n;
    cin>>n;
    for(i=1; i<=n; i++) {
        long int a=pow(i,1);
        long int b=pow(i,2);
        long int c=pow(i,3);
        //no scientific
        printf("%ld %ld %ld\n",a,b,c);
        printf("%ld %ld %ld\n",a,b+1,c+1);
//        printf("%32d %32d %32d\n",a,b,c);
//        printf("%32d %32d %32d\n",a,b+1,c+1);not possible presentation error

//        cout<<pow(i,1)<<" "<<pow(i,2)<<" "<<<<endl; scientific value comes
//        cout<<pow(i,1)<<" "<<pow(i,2)+1<<" "<<pow(i,3)+1<<endl;
    }
    return 0;
}

