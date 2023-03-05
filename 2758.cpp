#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
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
//    double a,b,c,d;
//    cin>>a>>b>>c>>d;
//    printf("A = %lf, B = %lf\n",a,b);
//    printf("C = %lf, D = %lf\n",c,d);
//
//    printf("A = %.1lf, B = %.1lf\n",a,b);
//    printf("C = %.1lf, D = %.1lf\n",c,d);
//
//    printf("A = %.2lf, B = %.2lf\n",a,b);
//    printf("C = %.2lf, D = %.2lf\n",c,d);
//
//    printf("A = %.3lf, B = %.3lf\n",a,b);
//    printf("C = %.3lf, D = %.3lf\n",c,d);
//
//    printf("A = %.3lE, B = %.3lE\n",a,b);
//    printf("C = %.3lE, D = %.3lE\n",c,d);
//
//    printf("A = %.0lf, B = %.0lf\n",a,b);
//    printf("C = %.0lf, D = %.0lf\n",c,d);
    float a, b;
    double c, d;

    scanf("%f %f", &a, &b);
    scanf("%lf %lf", &c, &d);

    printf("A = %f, B = %f\n", a, b);
    printf("C = %lf, D = %lf\n", c, d);
    printf("A = %.1f, B = %.1f\n", a, b);
    printf("C = %.1lf, D = %.1lf\n", c, d);
    printf("A = %.2f, B = %.2f\n", a, b);
    printf("C = %.2lf, D = %.2lf\n", c, d);
    printf("A = %.3f, B = %.3f\n", a, b);
    printf("C = %.3lf, D = %.3lf\n", c, d);
    printf("A = %.3E, B = %.3E\n", a, b);
    printf("C = %.3E, D = %.3E\n", c, d);
    printf("A = %.0f, B = %.0f\n", a, b);
    printf("C = %.0lf, D = %.0lf\n", c, d);
    return 0;
}
