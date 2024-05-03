#include <stdio.h>
#include <string.h>

/*
int main() {
    // int x = 10;
    // int* ptr = &x;
    // printf("Address of x: %p\n", &x); // check address of x
    // printf("value of ptr: %p\n", ptr); // check value of ptr
    // printf("value of ptr: %p\n", &ptr);
    
    int x = 10;
    int* ptr = &x;
    // x = 20;
    *ptr = 20;
    // printf("value of x: %d", x);
    printf("value of x: %d", *ptr);

    return 0;
}
*/

// void fun(int* p) {
//     printf("n value from main function: %d\n", *p);
// }

// int main() {
//     int n = 100;
//     fun(&n);

//     return 0;
// }

// void changeNumber(int* ptr) {
//     *ptr = 1000;
// }

// int main() {
//     int n = 500;
//     changeNumber(&n);
//     printf("%d", n);
//     return 0;
// }


// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     printf("Value of first index: %d\n", arr[1]);
//     printf("Value of first index: %d\n", *(arr + 1));
//     return 0;
// }


// void showNumbers(int* arr, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
// }
// int main() {
//     int arr[3] = {4, 6, 8};
//     showNumbers(arr, 3);
//     return 0;
// }


// int showNumbers(int arr[], int n) {
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", arr[i]);
//     }
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 1; i <= n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     showNumbers(arr, n);
//     return 0;
// }


// int sizeOfString(char* str) {
//     printf("%d\n", strlen(str));
// }
// int main() {
//     char str[20] = "bangladesh";
//     sizeOfString(str);
//     return 0;
// }

// int sizeOfString(char str[]) {
//     printf("%d\n", strlen(str));
// }
// int main() {
//     char str[20] = "bangladesh";
//     sizeOfString(str);
//     return 0;
// }

int changeValue(int* arr, int n) {
    arr[0] = 500;
}
int main() {
    int arr[4] = {2, 4, 6, 8};
    changeValue(arr, 5);
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}