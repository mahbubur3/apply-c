#include <stdio.h>

/*
int main() {
    printf("Hello!\nThis is Apple Inc.");
    return 0;
}
*/


// PRINT VARIABLE
/*
int main() {
    int johnAge = 20;

    printf("%d", johnAge);
    return 0;
}
*/


/*
int main() {
    int rockAge = 40;

    printf("%d", rockAge);
    return 0;
}
*/


/*
int main() {
    int rockAge = 40, johnAge = 50;

    printf("%d %d", rockAge, johnAge);
    return 0;
}
*/

/*
int main() {
    float floatNumber = 5.9900;

    printf("%0.2f", floatNumber);
    return 0;
}
*/


/*
// USER INPUT
int main() {
    int num;
    scanf("%d",&num);

    printf("%d", num);
    return 0;
}
*/


/*
int main() {
    int johnAge;
    char charLetter;
    float floatNum;
    scanf("%d %c %f", &johnAge, &charLetter, &floatNum);

    printf("%d %c %0.2f", johnAge, charLetter, floatNum);
    return 0;
}
*/

// # include <stdio.h>
// int main() {
//     printf("hello");
// }



// #include <stdio.h>
// int main() {
    // int num = 10;
    // printf("%d", num);
    // return 0;

    // float floatNum = 9.50000;
    // printf("%0.2f", floatNum);
    // return 0;

    // int numOne = 50, numTwo = 90;
    // printf("%d %d", numOne, numTwo);
    // return 0;
// }


#include <stdio.h>
int main() {
    // int userNum;
    // scanf("%d", &userNum);
    // printf("%d", userNum);
    // return 0;

    // int userNum;
    // printf("Type a number: \n");
    // scanf("%d", &userNum);
    // printf("%d", userNum);
    // return 0;

    int myNum;
    char myChar;
    printf("Enter a number and character: \n");
    scanf("%d %c", &myNum, &myChar);
    printf("%d %c", myNum, myChar);
    return 0;
}
