#include <stdio.h>
#include <string.h>

// int main() {
//     int n = 23;
//     printf("%p", &n);
// }


// int main() {
//     int n = 20;
//     int* ptr = &n;
//     printf("%d\n", *ptr);
    
//     return 0;
// }



// int main() {
//     int x = 100;
//     int* ptr = &x;
//     printf("Address of x: %p\n", &x);
//     printf("Value of ptr: %p\n", ptr);
// }


// int main() {
//     int x = 100;
//     int* ptr = &x;
//     x = 200;
//     *ptr = 200; // x = 200 and *ptr = 200 are same
//     printf("value of x: %d\n", x);
//     printf("value of x: %d\n", *ptr);
// }


// int main() {
//     double x = 5.25;
//     double* ptr = &x;
//     printf("value of x: %0.2lf\n", x);

//     return 0;
// }


// dereference
// int main() {
//     double x = 5.25;
//     double* ptr = &x;
//     *ptr = 10.20;
//     printf("value of x: %0.2lf\n", *ptr);
    
//     return 0;
// }


/*
int main() {
    double x = 5.25;
    double* ptr = &x;
    double* ptr2 = ptr;
    *ptr2 = 100.25;
    printf("value of x: %0.2lf\n", x);
    printf("value of x: %0.2lf\n", *ptr);
    printf("value of x: %0.2lf\n", *ptr2);
    
    return 0;
}
*/


/*
// CALL BY VALUE
void fun(int x) {
    x = 20; // nothing affect
}

int main() {
    int x = 10; // print this 
    fun(x);
    printf("%d\n", x);

    return 0;
}
*/


// CALL BY REFERENCE

// void fun(int* p) {
//     printf("%p\n", p);
// }

// int main() {
//     int x = 100;
//     fun(&x);

//     return 0;
// }


void fun(int* p, int* q) {
    // printf("value of x in main function: %d\n", *p);
    *p = 500;
    *q = 1000;
}

int main() {
    int x = 100, y = 200;
    fun(&x, &y);
    printf("%d %d", x, y);

    return 0;
}



/*
// ARRAY AND POINTER
int main() {
    int arr[5] = {50, 60, 70, 80, 90};
    printf("%d\n", arr[1]); // normally access
    printf("%d\n", *(arr+1)); // access with pointer
    printf("%d\n", *(arr+3));

    return 0;
}
*/



// FUNCTION AND ARRAY
/* void fun(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5);

    return 0;
} */

/* void fun(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5);

    return 0;
} */



/*
// FUNCTION AND STRING
void len(char arr[]) {
    printf("%d", strlen(arr));
}

int main() {
    char arr[20] = "world";
    len(arr);

    return 0;
}
*/



// FUNCTION WITH ARRAY AS REFERENCE
void newArr(int* arr, int l) {
    arr[0] = 20;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    newArr(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
// FUNCTION WITH string AS REFERENCE
void newStr(char* arr) {
    arr[0] = 'd';
}

int main() {
    char arr[] = "bangladesh";
    newStr(arr);
    printf("%s", arr);

    return 0;
}
*/


//-----------------------------------------
// int main() {
//     int arr[4] = {1, 2, 3, 4};
//     printf("%d\n", *arr);
// }