#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int t,n,i;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>s>>n;
        if(s[0]=='T' and s[1]=='h' and s[2]=='o' and s[3]=='r')
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
