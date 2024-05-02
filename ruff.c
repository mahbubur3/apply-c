#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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