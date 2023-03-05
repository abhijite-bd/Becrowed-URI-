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
//    int n,i,j,b,k,d,c,v;
//    while(scanf("%d %d",&n,&b)) {
//
//        int flag=1;
//        if(n==0 and b==0)
//            break;
//        else {
//            int a[b];
//            for(i=0; i<b; i++) {
////                cin>>a[i];
//                scanf("%d",&a[i]);
//            }
//            for(i=0; i<n; i++) {
//                scanf("%d %d %d",&d,&c,&v);
////                cin>>d>>c>>v;
//                a[d-1]-=v;
//                a[c-1]+=v;
//            }
//            for(i=0; i<n; i++) {
//                if(a[i]<0) {
//                    flag=0;
//                    break;
//                }
//            }
//            if(flag)
//                puts("S");
//            else
//                puts("N");
//        }
//    }
//    return 0;
//}
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int b, n, x, d, c, v;
    bool check;

    while(scanf("%i %i", &b, &n) && (b || n)) {
        int reserva[23];
        check = false;

        for (int i = 1; i <= b; ++i) {
            scanf("%i", &x);
            reserva[i] = x;
        }

        for (int i = 1; i <= n; ++i) {
            scanf("%i %i %i", &d, &c, &v);
            reserva[d] -= v;
            reserva[c] += v;
        }

        for (int i = 1; i <= b; ++i) {
            if(reserva[i] < 0) {
                check = true;
                break;
            }
        }

        if(check == true) {
            puts("N");
        } else {
            puts("S");
        }
    }

    return 0;
}
