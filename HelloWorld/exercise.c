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
