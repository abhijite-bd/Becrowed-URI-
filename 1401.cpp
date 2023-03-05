#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>s;
        sort(s.begin(),s.end());
        do {
            cout<<s<<endl;
        } while(next_permutation(s.begin(),s.end()));
        cout<<endl;
    }
    return 0;
}
