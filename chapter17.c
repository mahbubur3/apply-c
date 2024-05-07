#include <stdio.h>

void oneToFive(int i) {
    if (i == 6) {
        return;
    }
    printf("%d\n", i);
    oneToFive(i + 1);
}
int main() {
    showNumbers(1);
    return 0;
}


/* void fiveToOne(int i) {
    if (i == 0) {
        return;
    }
    printf("%d\n", i);
    fiveToOne(i - 1);
}

int main() {
    fiveToOne(5);
    return 0;
} */


/* void printArray(int arr[], int n, int i) {
    if (i == n) {
        return;
    }
    printf("%d\n", arr[i]);
    printArray(arr, n, i + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n, 0);
    return 0;
} */

// =================================== RECAP

// PRINT 1 TO 10
// 1 2 3 4 5 6 7 8 9 10
/* int oneToTen(int i) {
    if (i == 6) {
        return 0;
    }
    printf("%d", i);
    oneToTen(i + 1);
}
int main() {
    oneToTen(1);
    return 0;
} */


// PRINT 10 TO 1
// 10 9 8 7 6 5 4 3 2 1
/* void tenToOne(int i) {
    if (i == 0) {
        return;
    }
    printf("%d\n", i);
    tenToOne(i - 1);
}
int main() {
    tenToOne(10);
    return 0;
} */


// ARRAY PRINT
void numbers(int arr[], int n, int i) {
    if (i == n) {
        return;
    }
    printf("%d\n", arr[i]);
    numbers(arr, n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    numbers(arr, n, 0);
    return 0;
}



// PRINT 5 TO 1 REVERSE WAY
void reversePrint(int i) {
    if (i == 6) {
        return;
    }
    reversePrint(i + 1);
    printf("%d\n", i);
}
int main() {
    reversePrint(1);
    return 0;
}



// STRING LENGTH WITH RECURSION
int strLen(char str[], int i) {
    if (str[i] == '\0') {
        return 0;
    }
    int len = strLen(str, i + 1);
    return len + 1;
}

int main() {
    char str[10] = "hiworld";
    int len = strLen(str, 0);
    printf("%d\n", len);
    return 0;
}