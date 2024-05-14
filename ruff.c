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

int main() {
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
}