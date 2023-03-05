#include <iostream>

using namespace std;

int main()
{

    int t,totalb=0,totala=0,totalm=0,totald=0,n;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2>>n;
        if(s2[0]=='b')
            totalb+=n;
        if(s2[0]=='a')
            totala+=n;
        if(s2[0]=='m')
            totalm+=n;
        if(s2[0]=='d')
            totald+=n;
    }
    cout<<totalb/8+totala/4+totalm/6+totald/12<<endl;
    return 0;
}
