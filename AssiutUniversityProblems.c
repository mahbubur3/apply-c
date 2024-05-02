#include <stdio.h>
#include <string.h>
#include <limits.h>

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

// int main() {
//     long long int a, b, c, d;
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
//     long long int equation = (a * b) - (c * d);
//     printf("Difference = %lld", equation);
    
//     return 0;
// }


// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         printf("I Love Practice\n");
//     }
    
//     return 0;
// }

// int main() {
//     int a;
//     long long int b;
//     float c;
//     char d;
//     scanf("%d\n%lld\n%f\n%c", &a, &b, &c, &d);
    
//     printf("%d\n%lld\n%0.4f\n%c", a, b, c, d);
    
//     return 0;
// }



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


/*
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
*/


/*
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    long long int mul = ((long long)a * b * c * d) % 100;
    
    printf("%02lld", mul);
    
    return 0;
}
*/


// int main() {
//     int n, i;
//     scanf("%d", &n);
    
//     for (i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }


// int main(){
//     int n;
//     scanf("%d", &n);
    
//     if(n % n == 0 && n % 1 == 0) {
//         printf("Prime");
//     } else {
//         printf("Not prime");
//     }
    
//     return 0;
// }



// int main() {    
//     int n, sum=0, m;
//     scanf("%d",&n);  
    
//     while(n > 0) {    
//         m = n % 10;    
//         sum = sum + m;    
//         n = n / 10;
//     }  
    
//     printf("%d",sum);    
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
    
//     return 0;
// }


// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
    
//     if (a % b == 0 || b % a == 0) {
//         printf("Multiples");
//     } else {
//         printf("No Multiples");
//     }
    
//     return 0;
// }


// int main() {
//     char x;
//     int ans;
//     scanf("%c", &x);
    
//     if(x >= 'a' && x <= 'z') {
//         ans = x - 32;
//         printf("%c", ans);
//     } else {
//         ans = x + 32;
//         printf("%c", ans);
//     }
    
//     return 0;
// }


// int main() {
//     int x;
//     scanf("%d", &x);
    
//     int firstDigit = x / 1000;
    
//     if (firstDigit % 2 == 0) {
//         printf("EVEN");
//     } else {
//         printf("ODD");
//     }
    
//     return 0;
// }



// int main() {
//     char x;
//     int convert;
//     scanf("%c", &x);
    
//     if(x >= 'a' && x <= 'z') {
//         convert = x - 32;
//         printf("%c", convert);
//     } else {
//         convert = x + 32;
//         printf("%c", convert);
//     }
    
//     return 0;
// }


/*
int main() {
    char x;
    scanf("%c", &x);
    
    if (x >= '0' && x <= '9') {
        printf("IS DIGIT");
    } else {
        printf("ALPHA\n");
        if (x >= 'a' && x <= 'z') {
            printf("IS SMALL");
        } else {
            printf("IS CAPITAL");
        }
    }
}
*/


/*
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= b && a <= c) {
        printf("%d ", a);
    } else if (b <= a && b <= c) {
        printf("%d ", b);
    } else {
        printf("%d", c);
    }
    
    if (a >= b && a >= c) {
        printf("%d\n", a);
    } else if (b >= a && b >= c) {
        printf("%d\n", b);
    } else {
        printf("%d\n", c);
    }
}
*/


/*
// 5 user input
int main() {
    int n, sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        
        sum = sum + n;
    }
    
    printf("%d", sum);
    
    return 0;
}
*/


/*
int main() {
    int count = 0;
    float n;
    float sum = 0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        
        if (n > 0) {
            count = count + 1;
            sum = sum + n;
        }
    }
    
    float avg = sum / count;
    
    printf("%d valores positivos\n", count);
    printf("%0.1f", avg);
    
    return 0;
}
// 7 -5 6 -3.4 4.6 12
*/

 
/*
int main() {
    int n;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        
        if (n % 2 == 0) {
            count = count + 1;
        }
    }
    
    printf("%d valores pares", count);
     
    return 0;
}
*/
 

/*
int main() {
    int n;
    int EvenCount = 0, OddCount = 0, PosCount = 0, NegCount = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        
        if (n % 2 == 0) {
            OddCount = OddCount + 1;
        } else {
            EvenCount = EvenCount + 1;
        }
        
        if (n > 0) {
            PosCount = PosCount + 1;
        } else if (n < 0) {
            NegCount = NegCount + 1;
        }
    }
    
    printf("%d valor(es) par(es)\n", OddCount);
    printf("%d valor(es) impar(es)\n", EvenCount);
    printf("%d valor(es) positivo(s)\n", PosCount);
    printf("%d valor(es) negativo(s)\n", NegCount);
     
    return 0;
}
*/


/*
int main() {
    int x;
    scanf("%d", &x);
    
    for (int i = 1; i < x; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
*/


/*
int main() {
    int num, EvenCount = 0, OddCount = 0, PosCount = 0, NegCount = 0;
    scanf("%d", &num);
    
    int nums;
    for (int i = 0; i < num; i++) {
        scanf("%d", &nums);
        
        if (nums % 2 == 0) {
            EvenCount = EvenCount + 1;
        } else {
            OddCount = OddCount + 1;
        }
        
        if (nums > 0) {
            PosCount = PosCount + 1;
        } else if (nums < 0) {
            NegCount = NegCount + 1;
        }
    }
    
    printf("Even: %d\n", EvenCount);
    printf("Odd: %d\n", OddCount);
    printf("Positive: %d\n", PosCount);
    printf("Negative: %d\n", NegCount);
     
    return 0;
}
*/

/*
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        
        if (n == 1999) {
            printf("Correct\n");
            break;
        } else {
           printf("Wrong\n"); 
        }
    }
    
    return 0;
}
*/


// int main() {
//     int num;
//     scanf("%d", &num);
    
//     int nums, max = 0;
//     for (int i = 1; i <= num; i++) {
//         scanf("%d", &nums);
        
//         if (nums > max) {
//             max = nums;
//         }
//     }
//     printf("%d", max);
    
//     return 0;
// }



// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for (int i = 1; i <= 12; i++) {
//         printf("%d * %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }

/*
int main() {
    int test;
    scanf("%d", &test);
    
    for (int t=1;t<=test;t++) {
        int n;
        scanf("%d", &n);
    
        do {
            printf("%d ", n%10);
            n=n/10;
        }
        while (n != 0);
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    char alpha;
    int result;
    scanf("%c", &alpha);
    
    if (alpha >= 'a' && alpha <= 'z') {
        result = alpha - 32;
        printf("%c", result);
    } else {
        result = alpha + 32;
        printf("%c", result);
    }
    
    return 0;
}
*/

/*
int main() {
    long long int n;
    scanf("%lld", &n);
    
    long long int sum = n * (n + 1) / 2;
    
    printf("%lld\n", sum);
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    long long int a[n], sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        sum = sum + a[i];
    }
    
    if (sum < 0) {
        printf("%lld\n", sum*-1);
    } else {
        printf("%lld\n", sum);
    }
    
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        
        if (a[i] > 0) {
            a[i] = 1;
        } else if (a[i] < 0) {
            a[i] = 2;
        } else {
            a[i] = 0;
        }
        
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        
        if (a[i] <= 10) {
            printf("A[%d] = %d\n", i, a[i]);
        }
    }
    
    return 0;
}
*/


/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int x;
    scanf("%d", &x);
    
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    
    return 0;
}
*/

/*
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int min = INT_MAX, pos;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos);
    
    return 0;
}
*/



/*
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    int x[] = {};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i< n; i++) {
        // printf("%d", a[i]);
        a[i] = x[n];
        printf("%d", x[n]);
    }
    
    return 0;
}
*/


/*
#include <string.h>
int main() {
    char s[1001], t[1001];
    scanf("%s %s", s, t);
    
    int lengthOfS = strlen(s);
    int lengthOfT = strlen(t);
    printf("%d %d\n", lengthOfS, lengthOfT);
    printf("%s %s\n", s, t);
    
    return 0;
}
*/


/*
int main() {
    char a[1000001];
    fgets(a, 1000001, stdin);
    
    for (int i = 0; a[i] != '\\'; i++) {
        printf("%c", a[i]);
    }
    
    // int i = 0;
    // while (a[i] != '\\') {
    //     printf("%c", a[i]);
    //     i++;
    // }
    
    return 0;
}
*/


/*
int main() {
    char x[21], y[21];
    scanf("%s %s", x, y);
    
    int result = strcmp(x, y);
    if (result < 0) {
        printf("%s\n", x);
    } else if (result > 0) {
        printf("%s\n", y);
    } else {
        printf("%s\n", y);
    }
}
*/

/*
int main() {
    char c;
    int count[26] = {0};
    
    while(scanf("%c", &c) != EOF) {
        count[c-'a']++;
    }
    
    for (char i = 'a'; i <= 'z'; i++) {
        if(count[i-'a'] > 0) {
            printf("%c : %d\n", i, count[i-'a']);
        }
    }
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    char arr[n];
    scanf("%s", arr);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + (arr[i] - '0');
    }
    
    printf("%d\n", sum);
    
    return 0;
}
*/

/*
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count[100001] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    for (int i = 1; i < m+1; i++) {
        printf("%d\n", count[i]);
    }
    
    return 0;
}
*/

/*
int main() {
    int n, k;
    scanf("%d", &n);
    
    k = n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = k; j >= 1; j--) {
            printf("*");
        }
        
        k--;
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int n, s, k;
    scanf("%d", &n);
    
    s = n - 1;
    k = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        
        s--;
        k += 2;
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
*/


/*
int main() {
    int n, s, k;
    scanf("%d", &n);
    
    s = n-1;
    k = 1;
    
    for (int i = 1; i <= 2*n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        
        if (i < n) {
            s--;
            k += 2;
        }
        
        if (i > n) {
            s++;
            k -= 2;
        }
        
        printf("\n");
    }
    
    return 0;
}
*/


//------------ MODULE 15.5 PROBLEMS

/* int sum(int x, int y){
    int result = x + y;
    return result;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));

    return 0;
} */

/*
void minAndMax(int* arr, int n) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    minAndMax(arr, n);

    return 0;
}
*/
/*
void sorting(int arr[], int n) {

    // Store the first three elements
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];

    // Used selection sort in the array
    for (int i = 0; i <= n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {

                // Swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    // Print the original first three elements with blank line
    printf("\n%d\n%d\n%d\n", a, b, c);
}

int main() {
    int arr[3], n = 3;

    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the sorting function
    sorting(arr, n);

    return 0;
}
*/


void printNumbers(void) {
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        printf("%d ", i);
    }
}

int main() {
    printNumbers();

    return 0;
}


void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    // printNumbers(n);

    return 0;
}
