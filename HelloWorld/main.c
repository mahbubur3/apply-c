#include <stdio.h>
#include <stdlib.h>

/*
int main() {
    // printf("hello world!");
    // return 0;
    printf("Hello!");
    printf("Have a good day!");
    return 0;
}
*/


// create new line
/*
int main() {
    printf("Hello!\n");
    printf("I am learning C.");
    return 0;
}
*/


/*
// declare a variable
int myAge = 22;

// or

int myAge;
myAge = 15;
*/


/*
int main() {
    int myAge = 22;
    printf("%d", myAge);
}


int main() {
    int myAge = 20;
    printf("%d\n", myAge);

    int johnAge = 40;
    printf("%d", johnAge);
}


int main() {
    int myAge = 22;
    float myHeight = 5.3;
    char myGender = 'm';

    printf("%d\n", myAge); // integer %d
    printf("%f\n", myHeight); // float %f
    printf("%c\n", myGender); // character %c
}

int main() {
    int myAge = 22;
    printf("My age is: %d", myAge);
}



int main() {
    char myNfl = 'M';
    int myAge = 22;

    printf("My nfl: %c and my age: %d", myNfl, myAge);
}
*/

/*
// change variable value
int myAge = 22;
myAge = 24;


// or
int main() {
    int myAge2020 = 18;
    int myAge2022 = 20;

    myAge2020 = myAge2022;

    printf("%d", myAge2020);
}



int main() {
    int a = 5;
    int b = 9;
    int sum = a + b;
    printf("The result is %d", sum);
}


// multiple variable
int main() {
    int x = 10, y = 50, z = 30;
    printf("%d", x + y + z);
}
*/


/*
// calculate the area of a rectangle

int main() {
    int length = 10;
    int width = 5;
    int area;

    area = length * width;

    printf("result is %d", area);
}
*/


/*
basic data types
1. int
2. float
3. double
4. char

format:
int - %d or %i
float - %f or %F
double - %lf
char - %c
strings - %s
*/


/*
// Decimal precision
int main() {
    float myFloatNum = 5.5;
    // double myDoubleNum = 20.19;

    // printf("%f\n", myFloatNum);
    // printf("%lf", myDoubleNum);
    // output a doshomik er por onekgula number hoye jay. so seta solve korar jonno...

    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits
}
*/



/*
// constants
int main() {
    const int myBirthday = 20; // you cannot change the value
    myBirthday = 10;

    printf("%d", myBirthday);
}
*/


/*
// operator
int main() {
    int myNum = 100 + 50;

    printf("%d", myNum);
    return 0;
}
*/



/*
// booleans
#include <stdbool.h>

int main() {
    bool isMathEasy = false; // or 0
    bool isEnglishEasy = true; // or 1

    printf("%d", isMathEasy);
    printf("%d", isEnglishEasy);
}
*/


/*
// if...Else
// less than: a < b [a is less than b]
// greater than: a > b [a is greater than b]

int main() {
    // if (50 > 40) {
    //     printf("50 is greater than 40");
    // }

    // int a = 60;
    //  b = 30;
    // if (a > b) {
    //    printf("a is greater than b");
    // }

    // int johnAge = 10;
    // if (johnAge > 15) {
    //    printf("John is older than all students");
    // } else {
    //    printf("John age is okay");
    // }

    // int time = 22;
    // if (time < 10) {
    //     printf("Good Morning");
    // } else if (time < 20) {
    //     printf("Good Day");
    // } else {
    //     printf("Good Evening");
    // }

    // short hand if else or ternary operator
    // variable = (condition) ? expressionTrue : expressionFalse;
    // int time = 20;
    // (time < 18) ? printf("Good day") : printf("Good evening");

    // some example
    // int doorCode = 9954;

    // if (doorCode == 9954) {
    //     printf("The door is opening.");
    // } else {
    //     printf("Wrong! Please try again.");
    // }


    // int num = 10;

    // if (num > 0) {
    //     printf("this is positive number");
    // } else if (num < 0){
    //     printf("this is negative number");
    // } else {
    //     printf("this is 0");
    // }


    // int myAge = 18;
    // int votingAge = 18;

    // if (myAge > votingAge) {
    //     printf("You are eligible");
    // } else if (myAge == votingAge) {
    //     printf("You are eligible");
    // } else {
    //     printf("You are not eligible");
    // }
}
*/


/*
// while loop
int main() {
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
}


int main() {
    int countdown = 3;

    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown = countdown - 1; // or countdown--;
    }

    printf("Happy New Year!\n");
}


int main() {
    int dice = 1;

    while (dice <= 6) {

        if (dice < 6) {
            printf("No Yatzy\n");
        } else {
            printf("Yatzy!\n");
        }

        dice = dice + 1;
    }
}
*/


/*
// for loop
int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}


int main(){
    int i, j;

    for (i = 1; i <= 2; ++i) {
        printf("Outer: %d\n", i);

        for (j = 1; j <= 3; ++j) {
            printf(" Inner: %d\n", j);
        }
    }
}


int main() {
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }
}


int main() {
    for (int i = 0; i <= 10; i = i + 2){
        printf("%d\n", i);
    }
}
*/


/*
// Arrays
// int myNumbers[] = {5, 9, 2, 8};

int main() {
    // int myNumbers[] = {5, 9, 2, 8};
    // printf("%d", myNumbers[0]);


    // change array element
    // int myNumbers[] = {5, 9, 2, 8};
    // myNumbers[1] = 3;
    // printf("%d", myNumbers[1]);


    // loop through or show all numbers in array
    // int myNumbers[] = {5, 9, 2, 8};
    // for (int i = 0; i < 4; i++) {
    //     printf("%d\n", myNumbers[i]);
    // }
}
*/



// user input
int main() {
    // int myNum;
    // printf("Type a number: ");
    // scanf("%d", &myNum);
    // printf("Your number is: %d", myNum);

    // int myNum;
    // printf("Enter a number: ");
    // scanf("%d", &myNum);
    // printf("%d", myNum);

    // int myNum;
    // char myChar;
    // printf("enter your num and char: \n");
    // scanf("%d %c", &myNum, &myChar);
    // printf("Your number is %d\n", myNum);
    // printf("Your character is %c\n", myChar);

    char firstName[30];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Hello %s", firstName);
}

