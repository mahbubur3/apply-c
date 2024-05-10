#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int abc = a * b * c;
        long long int result;

        if (m % abc == 0) {
            printf("%lld\n", result);
        } else {
            printf("-1");
        }
    }

    return 0;
}