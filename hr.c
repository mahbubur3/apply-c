#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

// ASSIGNMENT 01
/*
int main() {
    printf("Hello, world! I am learning C programming 
    language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 
    100%% dedication to learn!\tI will succeed one day.");
    
    return 0;
}
*/


/*
int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    
    long long int mul = a * b;
    printf("%lld", mul);
    
    return 0;
}
*/


/*
int main() {
    int n;
    scanf("%d", &n);
    
    if (n % 3 == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
*/


/*
int main() {
    int n, i;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
*/


/*
int main() {
    int money;
    scanf("%d", &money);

    if (money > 1000) {
        money = money - 1000;
        printf("I will buy Punjabi\n");
        
        if (money >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
        
    } else {
        printf("Bad luck!\n");
    }

    return 0;
}
*/


// ASSIGNMENT 02
/*
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d. I Want More Assignments\n", i);
    }
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = n; i <= 0; i++) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = n-1; i > 0; i--) {
        if (i % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}
*/


/*
int main() {
    int n;
    scanf("%d", &n);
    
    int v[n];
    int sumPos = 0, sumNeg = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        
        if (v[i] > 0) {
            sumPos = sumPos + v[i];
        } else {
            sumNeg = sumNeg + v[i];
        }
    }
    
    printf("%d %d", sumPos, sumNeg);
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int x, v;
    scanf("%d %d", &x, &v);
    
    for (int i = n-1; i >= 0; i--) {
        a[x] = v;
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/

// MID-TERM
/*
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= k; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
*/

/*
int main() {
    char str[10001];
    scanf("%s", str);
    
    int count[26] = {0};
    
    for (int i = 0; i < strlen(str); i++) {
        int convertedInt = str[i] - 'a';
        count[convertedInt]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }
    
    return 0;
}
*/

/*
int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        char arr[10001];
        scanf("%s", arr);
        
        int smallCount = 0, capitalCount = 0, integerCount = 0;
        
        for (int i = 0; i < strlen(arr); i++) {
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                capitalCount++;
            } else if (arr[i] >= 'a' && arr[i] <= 'z') {
                smallCount++;
            } else {
                integerCount++;
            }
        }
        
        printf("%d %d %d\n", capitalCount, smallCount, integerCount);
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
    
    int dividedByTwo = 0, dividedByThree = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            dividedByTwo++;
        } else if (arr[i] % 3 == 0) {
            dividedByThree++;
        } else if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            dividedByTwo++;
        }
    }
    
    printf("%d %d", dividedByTwo, dividedByThree);
    
    return 0;
}
*/

/*
int main() {
    char arr[100001];
    scanf("%s", arr);
    
    int count = 0;
    
    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
        } else {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
*/


/*
int main() {
    char str[100];
    scanf("%s", str);
    
    int countt=0;
    
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int intValue = str[i] - 'a';
        count[intValue]++;
    }
    
    for (int i = 0; i < 26; i++) {
        // if(count[i] != 0) {
        //     printf("%c - %d\n", i + 'a', count[i]);
        // }
        int v[5] = {'a', 'e', 'i', 'o', 'u'}
        if (count[i] != v) {
            // printf("%c", count);
            countt++;
        }
    }
    printf("%d", countt);
    
    return 0;
}
*/

/*
int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int x;
        scanf("%d", &x);
        
        int check = 0;
        
        int i = 0;
        while (i < n) {
            if (a[i] == x) {
                check = 1;
                break;
            } else {
                i++;
            }
        }
        
        if (check == 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
*/

/*
int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        
        int single = m1 * d;
        int farmers = m1 + m2;
        int result = single / farmers;
        
        int final = d - result;
    
        printf("%d\n", final);
    }

    return 0;
}
*/


/*
int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 1; t <= test; t++) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        
        int single = m1 * d;
        int farmers = m1 + m2;
        int result = single / farmers;
        
        int final = d - result;
    
        printf("%d", final);
    }

    return 0;
}
*/


//! ASSIGNMENT 3
/*
int main() {
    int n, s, d, h;
    scanf("%d", &n);

    s = n - 1;
    h = 1;

    for (int i = 1; i <= (2*n)- 1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = 1; j <= h; j++) {
            if (i % 2 == 0) {
                printf("-");
            } else {
                printf("#");
            }
            
        }

        if (i < n) {
            s--;
            h += 2;
        } else {
            s++;
            h -= 2;
        }
        
        printf("\n");
    }

    return 0;
}
*/


/* int main() {
    int n, s, d;
    scanf("%d", &n);

    s = n - 1;
    d = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = d; j >= 1; j--) {
            printf("%d", j);
        }

        s--;
        d++;
        printf("\n");
    }

    return 0;
} */

/*
int count_before_one(int arr[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            break;
        } else {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", count_before_one(arr, n));

    return 0;
}
*/

/* 
int is_palindrome(char* str) {
    int i = 0, j = strlen(str) - 1;

    int check = 1;

    while (i < j) {
        if (str[i] != str[j]) {
            check = 0;
            break;
        } else {
            i++;
            j--;
        }
    }

    return check;
}

int main() {
    char str[1001];
    scanf("%s", str);

    int check = is_palindrome(str);

    if (check == 0) {
        printf("Not Palindrome");
    } else {
        printf("Palindrome");
    }
    
    return 0;
}
*/

/*
void odd_even() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d %d\n", evenCount, oddCount);
}

int main() {
    odd_even();

    return 0;
}
*/

//! FINAL EXAM
/* int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        char s[n];
        scanf("%s", s);
        
        int t = 0, p = 0;
        
        for (int j = 0; j < n; j++) {
            if (s[j] == 'T') {
                t++;
            } else {
                p++;
            }
        }
        
        if (t > p) {
            printf("Tiger\n");
        } else if (t < p) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }
    
    return 0;
} */


/* int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long int totalMul, a, b, c;
        scanf("%lld %lld %lld %lld", &totalMul, &a, &b, &c);
    
        long long int mulAbc = a * b * c;
        long long int result = totalMul / mulAbc;
    
        if (mulAbc * result == totalMul) {
            printf("%lld\n", result);
        } else {
            printf("-1\n");
        }
    }

    return 0;
} */


/* int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (n != m) {
        flag = 0;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == j || i + j == n - 1) {
                    if (a[i][j] != 1) {
                        flag = 0;
                    }
                } else if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
} */


/* int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", a[n - 1][i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][m - 1]);
    }

    return 0;
} */


/* int main() {
    int n, s, k;
    scanf("%d", &n);

    s = (10 + n) / 2;
    k = 1;

    for (int i = 0; i < ((10 + n) / 2) + 1; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }

        for (int j = 0; j < k; j++) {
            printf("*");
        }

        s--;
        k += 2;

        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
} */


int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 0; t < test; t++) {
        int n;
        scanf("%d", &n);
        
        int a[n], b[n], c[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (b[i] > b[j]) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
        }
        
        for (int i = 0; i < n; i++) {
            printf("%d ", abs(c[i]));
        }
        
        printf("\n");
    }
    
    return 0;
}
