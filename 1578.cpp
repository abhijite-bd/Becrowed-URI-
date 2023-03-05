//#include <bits/stdc++.h>
//#define ll long long int
//#define gcd(a, b) __gcd(a, b)
//#define lcm(a, b) (a * b) / gcd(a, b)
//#define ss ' '
//#define fast()                    \
//    ios_base::sync_with_stdio(0); \
//    cin.tie(NULL);                \
//    cout.tie(NULL)
//#define max3(a, b, c) max(max(a, b), c)
//#define min3(a, b, c) min(min(a, b), c)
//#define pb push_back
//using namespace std;
//int main()
//{
//
//    int n, m, counter = 4, i, j, k;
//    unsigned long long int x,  si, dif, sub;
//    scanf("%i", &n);
//
//    while (n--) {
//        scanf("%i", &m);
//        unsigned long long int matriz[m][m];
//        ll coluna[m];
////        vector<ll>coluna(m,0);
//
//        for (i = 0; i < m; ++i) {
//            for (j = 0; j < m; ++j) {
//                scanf("%llu", &x);
//                x *= x;
//                matriz[i][j] = x;
//                si = (int) floor( log10( (float) matriz[i][j] )) + 1;
//                if(i==0)
//                    coluna[j]= si;
//                else {
//                    if (coluna[j] < si)
//                        coluna[j]= si;
//                }
//
//
//            }
//        }
////        for(auto e:coluna)
////            cout<<e<<ss;
////        cout<<endl;
//        printf("Quadrado da matriz #%i:\n", counter);
//
//        for (i = 0; i < m; ++i) {
//            for (j = 0; j < m; ++j) {
//                sub = (int) floor( log10( (float) matriz[i][j] )) + 1;
//                dif = coluna[j] - sub;
//
//                for (k = 0; k < dif; ++k)printf(" ");
//                printf("%llu", matriz[i][j]);
//
//                if (j != (m - 1))
//                    printf(" ");
//            }
//            printf("\n");
//        }
//
//        counter++;
//        if (n >= 1)
//            printf("\n");
//    }
//    return 0;
//}

#include <cstdio>
using namespace std;

unsigned long long len (unsigned long long value)
{
    int l = 1;
    while(value > 9) {
        l++;
        value /= 10;
    }

    return l;
}

int main()
{
    int n, m, counter = 4, i, j, k;
    unsigned long long x, max, size, dif, sub;
    scanf("%i", &n);

    while(n--) {
        scanf("%i", &m);
        unsigned long long matriz[m][m], coluna[m];
        max = 0;

        for (i = 0; i < m; ++i) {
            for (j = 0; j < m; ++j) {
                scanf("%llu", &x);
                x *= x;
                matriz[i][j] = x;
            }
        }

        for (j = 0; j < m; ++j) {
            for (i = 0; i < m; ++i) {
                size = len(matriz[i][j]);
                if(max < size)
                    max = size;
            }
            coluna[j] = max;
            max = 0;
        }

        printf("Quadrado da matriz #%i:\n", counter);

        for (i = 0; i < m; ++i) {
            for (j = 0; j < m; ++j) {
                sub = len(matriz[i][j]);
                dif = coluna[j] - sub;

                for (k = 0; k < dif; ++k)
                    printf(" ");

                printf("%llu", matriz[i][j]);

                if(j != (m - 1))
                    printf(" ");
            }
            printf("\n");
        }

        counter++;
        if(n >= 1)
            printf("\n");
    }

    return 0;
}
