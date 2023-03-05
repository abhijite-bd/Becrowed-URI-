#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    int t,n1,n2,i,j,k;
    cin>>t;
    while(t--) {
        string s1,s2;
        cin>>s1>>s2;
        n1=s1.size();
        n2=s2.size();
        j=0;
        k=0;
        if(n1>=n2) {
            for(i=0; i<n2*2; i++) {
                if(i%2==0) {
                    cout<<s1[j];
                    j++;
                } else {
                    cout<<s2[k];
                    k++;
                }
            }
            for(i=n2; i<n1; i++) {
                cout<< s1[i];
            }
            cout<<endl;
        } else if(n1<n2) {
            for(i=0; i<n1*2; i++) {
                if(i%2==0) {
                    cout<<s1[j];
                    j++;
                } else {
                    cout<<s2[k];
                    k++;
                }
            }
            for(i=n1; i<n2; i++) {
                cout<< s2[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
