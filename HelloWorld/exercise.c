#include <stdio.h>


/*
// even and odd
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d is even", a);
    } else {
        printf("%d is odd", a);
    }
}
*/



/*
// leap year
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is leap year", year);
    } else if (year % 100 == 0){
        printf("%d is not leap year", year);
    } else if (year % 4 == 0) {
        printf("%d is leap year", year);
    } else {
        printf("%d is not leap year", year);
    }

    return 0;
}
*/



/*
// leap year with logical operator
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) {
        printf("%d is leap year", year);
    } else {
        printf("%d is not leap year", year);
    }
}
*/



// palindrome number
int main() {
    printf("Palindrome numbers less than 100:\n");

    for (int i = 0; i < 100; i++) {
        int number = i;
        int reversedNumber = 0;
        int originalNumber = number;

        while (number != 0) {
            int remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        if (originalNumber == reversedNumber && originalNumber < 100) {
            printf("%d\n", originalNumber);
        }
    }

    return 0;
}
