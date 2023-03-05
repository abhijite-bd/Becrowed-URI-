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

    char base[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char c;
    int i;

    while( scanf("%c",&c)!=EOF) {
        for (i=0; i<48; i++) {
            if (c == base[i]) {
                printf("%c",base[i-1]);
                break;
            } else if (c == ' ') {
                printf(" ");
                break;
            } else if (c == '\n') {
                printf("\n");
                break;
            }
        }
    }
    return 0;
}
