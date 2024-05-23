#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// PROBLEM 1
/* int myAbs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", myAbs(n));

    return 0;
} */

// PROBLEM 2
/* int myLen(char str[]) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {
    char str[100];
    scanf("%s", &str);

    printf("%d", myLen(str));

    return 0;
} */

// PROBLEM 3
/* int countOdd(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
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
    
    printf("%d", countOdd(arr, n));

    return 0;
} */


// PROBLEM 5
/* void swapIt(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swapIt(&x, &y);
    printf("%d %d", x, y);

    return 0;
} */

// PROBLEM 4
/* void changeIt(int* arr, int n) {
    arr[n - 1] = 100;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    changeIt(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} */


/* void maxAndMin() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    } 

    printf("%d %d\n", min, max);
}

int main() {
    maxAndMin();

    return 0;
} */


/* int sortNumbers() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int a = arr[0], b = arr[1], c = arr[2];

    for (int i = 0; i < 3-1; i++) {
        for (int j = i+1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);
}

int main() {
    sortNumbers();

    return 0;
} */


/* int myAbs(int n) {
    if (n < 0) {
        int convert = n * -1;
        return convert;
    } else {
        return n;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", myAbs(n));

    return 0;
} */


/* int countOdd(int* arr, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", countOdd(arr, n));

    return 0;
} */

/* void swapIt(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    swapIt(&a, &b);

    printf("%d %d", a, b);

    return 0;
} */


/* int main() {
    int n, s, d;
    scanf("%d", &n);

    s = n - 1;
    d = 1; 

    for (int i = 1; i <= (2*n)-1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = 1; j <= d; j++) {
            if (i % 2 == 0) {
                printf("-");
            } else {
                printf("#");
            }
        }

        if (i < n) {
            s--;
            d += 2;
        } else {
            s++;
            d -= 2;
        }
        printf("\n");
    }

    return 0;
} */


/* void reversePattern() {
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = k; j >= 1; j--) {
            printf("%d", j);
        }

        s--;
        k++;
        printf("\n");
    }
}

int main() {
    reversePattern();

    return 0;
} */


/* int countBeforeOne(int* arr, int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
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

    printf("%d", countBeforeOne(arr, n));

    return 0;
} */


/* int isPalindrome(char* str) {
    int check = 1, i = 0, j = strlen(str) - 1;

    while(i < j) {
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

    int check = isPalindrome(str);

    if (check == 0) {
        printf("no");
    } else {
        printf("yes");
    }

    return 0;
} */

// int main() {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     double calculateAb = pow(a, b);
//     double calculateCd = pow(c, d);

//     if (calculateAb > calculateCd) {
//         printf("YES");
//     } else {
//         printf("NO");
//     }

//     return 0; 
// }


/* int maxNumber(int a[], int n, int i) {
    int max = maxNumber(a, n, i + 1);

    if (a[i] > max) {
        return a[i];
    } else {
        return max;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    return 0;
} */

/* int main() {
    int n, k, s;
    scanf("%d", &n);

    k = 1;
    s = n - 1;

    for (int i = 1; i <= 2*n-1; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }

        for (int j = 1; j <= k; j++) {
            printf("*");
        }

        if (i <= n - 1) {
            s--;
            k += 2;
        } else {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
} */

/* int main() {
    int n, s, k;
    scanf("%d", &n);

    k = 1;
    s = (10 + n) / 2;

    int firstRow = ((10 + n) / 2) + 1;

    for (int i = 0; i < firstRow; i++) {
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

    int secondRow = 5;
    int s2 = 5;

    for (int i = 0; i < secondRow; i++) {
        for (int j = 0; j < s2; j++) {
            printf(" ");
        }

        for (int j = 0; j < n; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
} */

/* int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", a[i][j]);
        }

        printf("\n");
    }

    return 0;
} */

/* int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][c]);
        }
    }

    int flag = 1;
    if (r == c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j) {
                    continue;
                }

                if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    } else {
        flag = 0;
    }

    if (flag == 1) {
        printf("Diagonal Matrix\n");
    } else {
        printf("Not Diagonal Matrix\n");
    }

    return 0;
} */


/* int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (r != c) {
        flag = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j) {
                    if (a[i][j] != a[0][0]) {
                        flag = 0;
                    }
                } else if (a[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Scalar Matrix\n");
    } else {
        printf("Not Scalar Matrix\n");
    }

    return 0;
} */

/* int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (r != c) {
        flag = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j) {
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
        printf("Unit Matrix\n");
    } else {
        printf("Not Unit Matrix\n");
    }

    return 0;
} */

//* print recursion
/* void showString(int n, int i) {
    if (i == n) {
        return;
    }
    printf("Bangladesh\n");
    showString(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    showString(n, 0);
    return 0;
} */


//* print from 1 to n
/* void showNumbers(int n, int i) {
    if (i == n + 1) {
        return;
    }
    printf("%d\n", i);
    showNumbers(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    showNumbers(n, 1);
    return 0;
} */


//* print from n to 1
/* void showNumbers(int n, int i) {
    if (i == 0) {
        return;
    }
    printf("%d", i);
    showNumbers(n, i - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    showNumbers(n, n);
    return 0;
} */


//* print even indices
/* void evenIndices(int a[], int n, int i) {
    if (i == n) {
        return;
    }
    evenIndices(a, n, i + 1);
    if (i % 2 == 0) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    evenIndices(a, n, 0);
    return 0;
} */


//* summation
/* int sum(int a[], int n, int i) {
    if (i == n) {
        return 0;
    }
    int result = sum(a, n, i + 1);
    return result + a[i];
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, n, 0));
    return 0;
} */


//* matrix
/* int main() {
    int n;
    scanf("%d", &n);
 
    int a[n][n];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
 
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                primaryDiagonalSum += a[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                secondaryDiagonalSum += a[i][j];
            }
        }
    }
    
    int difference = primaryDiagonalSum - secondaryDiagonalSum;
    
    int convertAbsolute = abs(difference);
    printf("%d", convertAbsolute);
    
    return 0;
}   */

/* int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) {
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("will take number\n");
    } else {
        printf("will not take number\n");
    }     

    return 0;
} */


//* mirror array
/* int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = m - 1; j >= 0; j--) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
} */


//* sum of a matrix
/* int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], s[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", s[i][j]);
        }

        printf("\n");
    }

    return 0;
} */

/* int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
} */


/* int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0], count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}  */


/* int main() {
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++) {
        int n;
        scanf("%d", &n);

        char s[n];
        scanf("%s", s);

        int countTiger = 0, countPathaan = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'T') {
                countTiger++;
            } else if (s[i] == 'P') {
                countPathaan++;
            }
        }

        if (countTiger > countPathaan) {
            printf("Tiger\n");
        } else if (countTiger < countPathaan) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
} */


/* int main() {
    int test; 
    scanf("%d", &test);

    for (int t = 0; t < test; t++) {
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int x = a * b * c;
        int result = m / x;

        if (result * x == m) {
            printf("%d", result);
        } else {
            printf("-1");
        }
    }

    return 0;
} */


/* int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    if (r != c) {
        flag = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (i == j || i + j == r - 1) {
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
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < c; i++) {
        printf("%d ", a[r-1][i]);
    }

    printf("\n");

    for (int i = 0; i < r; i++) {
        printf("%d ", a[i][c-1]);
    }

    return 0;
} */


/* int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    float avg = sum / n;
    printf("%0.2f", avg);

    return 0;
} */



//---//----//----///-----/////---///---///--//
/*
int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Hello\n");
    }
    
    return 0;
}
*/


// int main() {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }



// int main() {
//     for (int i = 2; i <= 10; i = i + 2) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }


// int main() {
//     for (int i = 20; i >= 1; i--) {
//         printf("%d\n", i);
//     }
    
//     return 0;
// }


/*
int main() {
    int sum = 0, n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    printf("%d", sum);
    
    return 0;
}
*/


/*
int main() {
    int sum = 0;
    
    for(int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    
    printf("%d", sum);
    
    return 0;
}
*/


/*
int main() {
    for (int i = 1; i <= 20; i++) {
        
        if(i % 2 == 0) {
            printf("%d - even\n", i);
        } else {
            printf("%d - odd\n", i);
        }
    }
    
    return 0;
}
*/


/*
int main() {
    for (int i = 1; i <= 10; i++) {
        
        if(i == 5) {
            break;
        }
        
        printf("%d", i);
    }
    
    return 0;
}
*/


/*
int main() {
    for (int i = 1; i <= 10; i++) {
        
        printf("%d", i);
        
        if(i == 5) {
            break;
        }
    }
    
    return 0;
}
*/


/*
int main() {
    for (int i = 1; i <= 10; i++) {
        
        if(i == 5) {
            continue;
        }
        
        printf("%d", i);
    }
    
    return 0;
}
*/


// int main() {
//     int i = 1;
    
//     while (i <= 10) {
//         printf("%d\n", i);
//         i++;
//     }
    
//     return 0;
// }


/*
int main() {
    int i = 1;
    
    while (i <= 10) {
        if (i == 6) {
            break;
        }
        
        printf("%d", i);
        i++;
    }
    
    return 0;
}
*/


/*
int main() {
    int i = 1;
    
    do {
        printf("%d\n", i);
        i++;
    }
    while (i <= 5);
    
    return 0;
}
*/



// QUIZ \\\\\\\\\\\\\\\\\\\\\\\\\\

// int main()
// {
//     int k;
//     for (k = -3; k < -5; k++)
//         printf("Hello ");
//     return 0;
// }



// int main() {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
// printf("%d",i);
// return 0;
// }



// int main() {
//     int a = 0;
    
//     for (int i = 0; i < 5; i++) {
//         a++;
//         continue;
//     }
    
//     printf("%d %d", i, a);
    
//     return 0;
// }



// int main() {
//     int a = 0, i;
    
//     for (i = 0; i < 5; i++) {
//         continue;
//         a++;
//     }
    
//     printf("%d %d", i, a);
//     return 0;
// }


// int main() {
//     int i = 0;
//     while (i = 0) {
//         printf("Hello\n");
//     }
//     return 0;
// }


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


/*
int main() {
    int num;
    scanf("%d", &num);
    
    int nums;
    int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 1; i <= num; i++) {
        scanf("%d", &nums);
        
        if (nums % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        
        if (nums > 0) {
            pos++;
        } else {
            neg++;
        }
    }
    
    printf("%d", even);
    
    return 0;
}
*/

// #include <limits.h>
// max = INT_MIN, min = INT_MAX;


// int main() {
//     int n;
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             printf("%d\n", i);
//         }
//     }
    
//     return 0;
// }


// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
    
//     int sub = a - b;
//     if (sub >= 0) {
//         printf("%d", sub);
//     } else {
//         printf("%d", 0);
//     }
    
//     return 0;
// }


// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int lastDigit = n % 10;
//     int firstDigit = n/10;
//     if (lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0) {
//         printf("YES\n");
//     } else {
//         printf("YES\n");
//     }
    
//     return 0;
// }


// int main() {
//     char a;
//     scanf("%c", &a);
    
//     if (a == 'z') {
//         printf("a");
//     } else {
//         char result = a + 1;
//         printf("%c", result);
//     }
    
//     return 0;
// }

/*
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a + b - c == d) {
        printf("YES\n");
    } else if (a - b + c == d) {
        printf("YES\n");
    } else if (a + b * c == d) {
        printf("YES\n");
    } else if (a - b * c == d) {
        printf("YES\n");
    } else if (a * b + c == d) {
        printf("YES\n");
    } else if (a * b - c == d) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
     
    return 0;
}
*/


/*
int main() {
    int nums[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}
*/

/*
int main() {
    int ar[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &ar[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", ar[i]);
    }
    
    return 0;
}
*/

/*
// array initializing
int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}
*/


// if i need zero
// int main() {
//     int nums[5] = {0};
    
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", nums[i]);
//     }
    
//     return 0;
// }


/*
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}
*/


/*
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            printf("%d\n", nums[i]);
        }
    }
    
    return 0;
}
*/


/*
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = n-1; i > 0; i--) {
        if (i % 2 != 0) {
            printf("%d ", nums[i]);
        }
    }
    
    return 0;
}
*/



/*
#include <stdio.h>

int main()
{
    long long eye, mouth, body, num;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    num = 0;

    if (eye != 0 && body != 0) {
        if (mouth >= eye && mouth >= body && eye != 0 && body != 0) {
            if (eye >= body) {
                num = bodyf;
            } else if (body >= eye) {
                num = eye;
            }
            
        } else if (eye <= mouth && eye <= body) {
            num = eye;
        } else if (body <= mouth && body <= eye) {
            num = body;
        } else if (mouth <= body && mouth <= eye) {
            num += mouth;
            eye -= mouth;
            body -= mouth;

            if (eye / 2 <= body) {
                if (eye % 2 == 0) {
                    eye = eye / 2;
                    num += eye;
                } else {
                    eye -= 1;
                    eye = eye / 2;
                    num += eye;
                }
            } else {
                num += body;
            }
        }
    }
    
    printf("%lld", num);
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
    
    for(int i = n-1; i >= 0; i--){
        printf("%d", a[i]);
    }
    
    return 0;
}
*/


/*
// insert element from an array 
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int p, v;
    scanf("%d %d", &p, &v);
    for (int i = n; i >= p+1; i--) {
        a[i] = a[i-1];
    }
    a[p] = v;
    
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/


/*
// delete element from an array
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int p;
    scanf("%d", &p);
    
    for (int i = p; i < n-1; i++) {
        a[i] = a[i + 1];
    }
    
    for (int i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
*/



// reverse array elements
// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
    
//     int i = 0, j = n-1;
//     while (i < j) {
//         int temp; 
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
    
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }



/*
// add two array together
int main() {
    int n1;
    scanf("%d", &n1);
    
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    
    int n2;
    scanf("%d", &n2);
    
    int a2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    
    int fullArray[n1+n2];
    for (int i = 0; i < n1; i++) {
        fullArray[i] = a1[i];
    }
    
    int i = n1;
    for (int j = 0; j < n2; j++) {
        fullArray[i] = a2[j];
        i++;
    }
    
    for (int i = 0; i < n1+n2; i++) {
        printf("%d ", fullArray[i]);
    }
        
    return 0;   
}
*/


// WORKING WITH STRING ===================================================

// int main() {
//     char a[6] = "Mahbub";
    
//     for (int i = 0; i < 6; i++) {
//         printf("%c\n", a[i]);
//     }
    
//     return 0;
// }


// int main() {
//     char a[7] = "Mahbub";
//     printf("%s", a);
    
//     return 0;
// }



// string input
// int main() {
//     char name[7];
//     scanf("%s", name);
//     printf("%s\n", name);
    
//     return 0;
// }


// gets function error on online & fgets is okay.
// #include <string.h>
// int main() {
//     char a[100];
//     fgets(a, 16, stdin);
//     printf("%s", a);
    
//     return 0;
// }


// print 10 letter using null 
// #include <string.h>
// int main() {
//     char a[100];
//     fgets(a, 16, stdin);
//     a[10] = '\0';
//     printf("%s", a);
    
//     return 0;
// }


// #include <string.h>
// int main() {
//     char name[20];
//     fgets(name, 14, stdin);
//     printf("%s", name);
    
//     return 0;
// }


// check array length
/*
int main() {
    char a[100];
    scanf("%s", a);
    
    int count = 0, i = 0;
    while (a[i] != '\0') {
        i++;
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
*/

// with function
// #include <string.h>
// int main() {
//     char a[100];
//     scanf("%s", a);
    
//     int sizeOfString = strlen(a);
//     printf("%d\n", sizeOfString);
    
//     return 0;
// }


/*
void changeIt(int* arr, int n) {
    arr[n-1] = 100;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    changeIt(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/


// void printNumbers(void) {
//     int x;
//     scanf("%d", &x);

//     for (int i = 1; i <= x; i++) {
//         printf("%d ", i);
//     }
// }

// int main() {
//     printNumbers();

//     return 0;
// }

// void swapNum(int* x, int* y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int x, y;
//     scanf("%d %d", x, y);
//     // int x = 20, y = 10;

//     swapNum(&x, &y);
//     printf("%d %d", x, y);

//     return 0;
// }


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
