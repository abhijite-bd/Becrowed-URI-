#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,c=0;
    cin>>a;
    for(int i=a; ; i++) {
        if(i%2==1) {
            cout<<i<<endl;
            c++;
        }
        if(c==6)
            return 0;
    }
}

