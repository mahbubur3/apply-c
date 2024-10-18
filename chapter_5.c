// Problem one
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a >= b) {
        printf("Yes");
    } else {
        printf("No");
    }
}


// Problem two
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0) {
        printf("Multiples");
    } else {
        printf("No Multiples");
    }
}



// Problem three
int main() {
    char x;
    int convert;
    scanf("%c", &x);
    
    if(x >= 'a' && x <= 'z') {
        convert = x - 32;
        printf("%c", convert);
    } else {
        convert = x + 32;
        printf("%c", convert);
    }
    
    return 0;
}


// Problem four
int main() {
    int x, firstDigit;
    scanf("%d", &x);
    firstDigit = x;
    
    while(firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }
    
    if (firstDigit % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
    
    return 0;
}


// Problem five
int main() {
    char x;
    scanf("%c", &x);
    
    if (x >= '0' && x <= '9') {
        printf("IS DIGIT");
    } else {
        printf("ALPHA\n");
        
        if (x >= 'a' && x <= 'z') {
            printf("IS SMALL");
        } else {
            printf("IS CAPITAL");
        }
    }
}



// Problem six
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int minNum = a;
    int maxNum = a;
    
    if (b < minNum) {
        minNum = b;
    }
    
    if (c < minNum) {
        minNum = c;
    }
    
    if (b > maxNum) {
        maxNum = b;
    }
    
    if (c > maxNum) {
        maxNum = c;
    }
    
    printf("%d %d", minNum, maxNum);
    
}
