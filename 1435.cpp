//#include<iostream>
//#include<iomanip>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
//#include<array>
//#include<vector>
//#include<queue>
//#include<set>
//#define   ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define   ss " "
//#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
//#define   max3(a,b,c) max(max(a,b),c)
//#define   min3(a,b,c) min(min(a,b),c)
//using namespace std;
//int main()
//{
//    int i,j;
//    int n;
//    while(cin>>n and n!=0) {
//
//        for(i=1; i<=n; i++) {
//            for(j=1; j<=n; j++)
//                if(j==0)
//                    cout<<setw(3)<<min(min(n+1-i,n+1-j),min(i,j));
//                else
//                    cout<<" "<<setw(3)<<min(min(n+1-i,n+1-j),min(i,j));
//
//
//            cout<<endl;
//        }
//
//        cout<<endl;
//    }
//    return 0;
//}



#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[])
{
    int n, mid, i, j, bot, m[100][100];


    while(cin >> n && n != 0){

        mid = ( n%2 == 0 ? n/2 : (n/2)+1);

        for(i = 0; i < mid; i++) {
            bot = (n-1)-i;

            for(j = i; j <= bot; j++){
                m[i][j] = i+1;
                m[bot][j] = i+1;
                m[j][i] = i+1;
                m[j][bot] = i+1;
            }

        }

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++)
                if(j == 0)
                    cout << setw(3) << m[i][j];
                else
                    cout << " " << setw(3) << m[i][j];

            cout << endl;
        }

        cout << endl;
    }

    return 0;

}
