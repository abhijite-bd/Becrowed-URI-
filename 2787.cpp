#include <iostream>

using namespace std;

int main() {

    long int a,b;
    cin>>a>>b;
    if((a%2==0 and b%2==0) or (a%2==1 and b%2==1))
        cout<<1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
