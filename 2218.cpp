#include <iostream>

using namespace std;

int main()
{
    int t,n,l;
    cin>>t;
    while(t--) {
        cin>>n;
        int l=n*n+n;
        cout<<l/2+1<<endl;
    }
    return 0;
}
