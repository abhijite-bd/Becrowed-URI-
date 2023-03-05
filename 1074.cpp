#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n;
    long int a;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a==0)
            cout<<"NULL\n";
        else {
            if(a<0) {
                if(a*a%2==0)
                    cout<<"EVEN NEGATIVE\n";
                else
                    cout<<"ODD NEGATIVE\n";
            } else {
                if(a*a%2==0)
                    cout<<"EVEN POSITIVE\n";
                else
                    cout<<"ODD POSITIVE\n";
            }
        }
    }
    return 0;
}
