#include <stdio.h>
#include <math.h>


// RETURN + PARAMETER
/*
int sum(int a, int b) {
    int operation = a + b;
    
    return operation;
}

int main() {
    int result = sum(100, 200);
    printf("%d", result);
    
    return 0;
}
*/



/*
int calculation(int x, int y) {
    int mul = x * y;
    
    return mul;
}

int main() {
    int mulResult = calculation(200, 100);
    printf("%d\n", mulResult);
    
    return 0;
}
*/



/*
int sum(int a, int b) {
    int operation = a + b;
    
    return operation;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int result = sum(a, b);
    printf("%d", result);
    
    return 0;
}
*/



/*
// RETURN + NO PARAMETER
int sum() {
    int a = 100, b = 500;
    int operation = a + b;
    
    return operation;
}

int main() {
    int result = sum();
    printf("%d", result);
    
    return 0;
}
*/



/*
// empty parameter is not safe so use void as parameter
int sum(void) {
    int a = 100, b = 500;
    int operation = a + b;
    
    return operation;
}

int main() {
    int result = sum(6000);
    printf("%d", result);
    
    return 0;
}
*/


/*
int sum() {
    int a, b;
    scanf("%d %d", &a, &b);
    int operation = a + b;
    
    return operation;
}

int main() {
    int result = sum();
    printf("%d", result);
    
    return 0;
}
*/

/*
// NO RETURN + PARAMETER
void sum(int x, int y) {
    int result = x + y;
    printf("%d", result);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    sum(a, b);
    
    return 0;
}
*/


/*
// NO RETURN + NO PARAMETER
void sum(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int result = a + b;
    printf("%d", result);
}

int main() {
    sum();
    
    return 0;
}
*/


// POINTERS
// int main() {
//     int num = 23;
    
//     printf("%d\n", num); // show value of num
//     printf("%p", &num); // show memory address of num
    
//     return 0;
// }



// int main() {
//     int n = 20;
//     int* ptr = &n;
//     printf("%p\n", ptr);
    
//     return 0;
// }


// show dereference
// int main() {
//     int n = 20;
//     int* ptr = &n;
//     printf("%d\n", *ptr);
    
//     return 0;
// }


int main() {
    int n = 20;
    int* ptr = &n;
    *ptr = 90;
    printf("%d\n", n);
    
    return 0;
}