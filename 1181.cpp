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
    int n;
    char t;
    double N[12][12];
    double sum = 0.0;

    cin >>n;
    cin >> t;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            std::cin >> N[i][j];
            if(i ==n) {
                sum += N[i][j];
            }
        }
    }
    if(t == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum/12);
    return 0;
}
