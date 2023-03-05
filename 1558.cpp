//#include<bits/stdc++.h>
//#define   ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
//#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
//#define   max3(a,b,c) max(max(a,b),c)
//#define   min3(a,b,c) min(min(a,b),c)
//#define   pb push_back
//using namespace std;
//int main()
//{
//    int i,j,n;
//    int k=0;
//    vector<int>a;
//    for(i=1; i<101; i++) {
//        for(j=1; ; j++) {
//            if(i*i+j*j>10000)
//                break;
//            a.pb(i*i+j*j);
//        }
//    }
//    sort(a.begin(),a.end());
//
//    while(cin>>n) {
//        int flag=0;
//        for(i=0; i<100000; i++) {
//            if(a[i]==n) {
//                flag=1;
//                break;
//            }
//            if(a[i]>n)
//                break;
//        }
//
//        if(flag)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n, i, j, s;
    bool b;

    while(cin>>n) {
        b = false;
        i = 0;
        j = sqrt(n);

        while(j >= i) {
            s = pow(i,2) + pow(j,2);

            if(s == n) {
                b = true;
                break;
            } else if(s < n) {
                i++;
            } else {
                j--;
            }
        }

        if(b) puts("YES");
        else puts("NO");
    }

    return 0;
}
