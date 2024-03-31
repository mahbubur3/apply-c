#include <stdio.h>

//-------------- arithmetic operators: +, -, /, *, %
/*
int main() {
    int a = 90, b = 10;
    int sum = a + b;

    printf("%d", sum);
    return 0;
}
*/

/*
// if i need decimal number
int main() {
    int a = 21, b = 2;
    float divide = a / 2;

    printf("%f", divide);
    return 0;
}
*/

//-------------- relational operators: <, >, <=, =>, ==, !=

//-------------- logical operators: && (and) || (or)



// CONDITIONAL STATEMENT
// if, else, else if
/*
int main() {
    int amount;
    scanf("%d", &amount);

    if (amount == 100) {
        printf("Eat burger");
    } else {
        printf("Eat nothing");
    }

    return 0;
}
*/


/*
int main() {
    int amount;
    scanf("%d", &amount);

    if (amount >= 100) {
        printf("Eat burger");
    } else {
        printf("Eat nothing");
    }

    return 0;
}
*/


/*
int main() {
    int amount;
    scanf("%d", &amount);

    if (amount >= 100) {
        printf("Eat burger");
    } else if (amount >= 50) {
        printf("Eat fuchka");
    } else {
        printf("Eat nothing");
    }

    return 0;
}
*/


/*
// nested if else or nested condition
int main() {
    int amount;
    scanf("%d", &amount);

    if (amount >= 5000) {
        printf("Go to coxsbazar\n");

        if (amount >= 10000) {
            printf("Go to saintmartin\n");
        } else {
            printf("Return from coxsbazar\n");
        }

    } else {
        printf("Do not go anywhere\n");
    }

    return 0;
}
*/

int main() {
    int x = 5/2;
    printf("%d", x);
    return 0;
}
