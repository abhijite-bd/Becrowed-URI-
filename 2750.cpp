//#include<iostream>
//#include<math.h>
//#include<algorithm>
//#include<cstring>
//#include<array>
//#include<vector>
//#include<queue>
//#define ll long long int
//#define   gcd(a,b)   __gcd(a,b)
//#define   lcm(a,b)   (a*b)/gcd(a,b)
//#define ss " "
//using namespace std;
//int main()
//{
//    int n=39,j,i;
//    char k='A';
//    for(i=0; i<20; i++) {
//        if(i==1)
//            cout<<"| decimal   |  octal  |  Hexadecimal  |";
//        for(j=0; j<n; j++) {
//            if(i==0 or i==2 or i==19)
//                cout<<'-';
//            else if(i==1)
//                continue;
//            else {
//                if(j==11 or j==0 or j==20 or j==36)
//                    cout<<'|';
//                if(j==5) {
//                    if(i<13){
//                        cout<<ss<<i-3;
//                        j++;
//                    }
//                    else{
//                        cout<<i-3;
//                        j++;
//                    }
//                } else if(j==14) {
//                    if(i<11){
//                        cout<<ss<<i-3;
//                        j++;
//                    }
//                    else{
//                        cout<<i-1;
//                        j++;
//                    }
//                } else if(j==27) {
//                    if(i<13){
//                        cout<<i-3;
//                        j++;
//                    }
//                    else {
//                        printf("%c",k);
//                        j++;
//                        k++;
//                    }
//                } else
//                    cout<<ss;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    printf("|      0    |    0    |       0       |\n");
    printf("|      1    |    1    |       1       |\n");
    printf("|      2    |    2    |       2       |\n");
    printf("|      3    |    3    |       3       |\n");
    printf("|      4    |    4    |       4       |\n");
    printf("|      5    |    5    |       5       |\n");
    printf("|      6    |    6    |       6       |\n");
    printf("|      7    |    7    |       7       |\n");
    printf("|      8    |   10    |       8       |\n");
    printf("|      9    |   11    |       9       |\n");
    printf("|     10    |   12    |       A       |\n");
    printf("|     11    |   13    |       B       |\n");
    printf("|     12    |   14    |       C       |\n");
    printf("|     13    |   15    |       D       |\n");
    printf("|     14    |   16    |       E       |\n");
    printf("|     15    |   17    |       F       |\n");
    printf("---------------------------------------\n");
return 0;
}
