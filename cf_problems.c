#include <stdio.h>


/*
int main() {
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    
    long long int sum = x + y;
    long long int mul = x * y;
    long long int sub = x - y;
    
    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, sub);
    
    return 0;
}
*/


/*
int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
    long long int equation = (a * b) - (c * d);
    printf("Difference = %lld", equation);
    
    return 0;
}
*/


/*
int main() {
    int n, i;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("I Love Practice\n");
    }
    
    return 0;
}
*/


/*
int main() {
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d\n%lld\n%f\n%c", &a, &b, &c, &d);
    
    printf("%d\n%lld\n%0.4f\n%c", a, b, c, d);
    
    return 0;
}
*/


// int main() {
//     int sum = 0, n, i;
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         sum += i;
//     }
//     printf("%d", sum);
    
//     return 0;
// }


// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }


// show numbers who disible by 3 and 5
// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int a, b;
//     scanf("%d %d", &a, &b);
//     float x, y;
//     scanf("%f %f", &x, &y);
    
//     int sum = a + b;
//     int sub = a - b;
//     printf("%d %d\n", sum, sub);
    
//     float sum2 = x + y;
//     float sub2 = x - y;
//     printf("%0.1f %0.1f", sum2, sub2);
    
//     return 0;
// }



// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     if (n == 1) {
//         printf("-1\n");
//         return 0;
//     }
    
//     for (i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }



// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
    
//     if (a >= b) {
//         printf("Yes");
//     } else {
//         printf("No");
//     }
// }



// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
    
//     if (a % b == 0 || b % a == 0) {
//         printf("Multiples");
//     } else {
//         printf("No Multiples");
//     }
// }



// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
    
//     if(a > b)
// }


/*
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int minNum = a;
    int maxNum = a;
    
    if (b < minNum) {
        minNum = b;
    }
    
    if (c < minNum) {
        minNum = c;
    }
    
    if (b > maxNum) {
        maxNum = b;
    }
    
    if (c > maxNum) {
        maxNum = c;
    }
    
    printf("%d %d", minNum, maxNum);
}
*/


/*
int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    
    long long int lastNumN = n % 10; // access last digit in c language
    long long int lastNumM = m % 10;
    
    long long int sum = lastNumN + lastNumM;
    printf("%lld", sum);
    
    return 0;
}
*/



// access first digit and check even or odd
int main() {
    int x;
    scanf("%d", &x);
    
    while(x >= 10) { // access first digit
        x = x / 10;
    }
    
    int firstDigit = x;
    
    if (firstDigit % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
    
    return 0;
}



