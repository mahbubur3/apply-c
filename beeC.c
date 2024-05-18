#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>


/* int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b % a == 0 || a % b == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
} */


int main() {
    long double r;
    scanf("%Lf", &r);

    long double result = (4.0/3.0) * 3.14159 * (r*r*r);
    printf("VOLUME = %0.3Lf", result); 

    return 0;
}