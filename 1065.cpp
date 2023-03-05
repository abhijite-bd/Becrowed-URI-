#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a[5],e=0,o=0,n=0,p=0;
    for(int i=0; i<5; i++) {
        cin>>a[i];
        if(a[i]%2==0)
            e++;
    }
    cout<<e<<" valores pares"<<endl;
    return 0;
}

