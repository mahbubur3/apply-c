#include <stdio.h>
#include <string.h>


// COPY STRING
// int main() {
//     char s1[10], s2[10];
//     scanf("%s %s", s1, s2);
    
//     for (int i = 0; i <= strlen(s2); i++) {
//         s1[i] = s2[i];
//     }
//     printf("%s %s", s1, s2);

//     return 0;
// }


/*
int main() {
    char a[10], b[10];
    scanf("%s %s", a, b);
    
    for (int i = 0; i <= strlen(b); i++) {
        a[i] = b[i];
    }
    printf("%s %s", a, b);
    
    return 0;
}
*/

/*
// implemented buit-in function
int main() {
    char s1[10], s2[10];
    scanf("%s %s", s1, s2);
    
    strcpy(s1, s2);
    printf("%s %s", s1, s2);

    return 0;
}
*/


/*
// String Lexicographical Comparison with buit-in function
int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    
    int result = strcmp(a, b);
    if (result < 0) {
        printf("a is smaller\n");
    } else if (result > 0) {
        printf("b is smaller\n");
    } else {
        printf("Same\n");
    }
    
    return 0;
}
*/

// string concatenation
/*
int main() {
    char a[200], b[200];
    scanf("%s %s", a, b);
    
    int k = strlen(a);
    for (int i = 0; i <= strlen(b); i++) {
        a[k] = b[i];
        k++;
    }
    printf("%s", a);
    
    return 0;
}
*/


/*
// with function
int main() {
    char a[200], b[200];
    scanf("%s %s", a, b);
    
    strcat(a, b);
    printf("%s", a);
    
    return 0;
}
*/


/*
int main() {
    char a[200], b[200];
    scanf("%s %s", a, b);
    
    int k = strlen(a);
    for (int i = 0; i <= 2; i++) {
        a[k] = b[i];
        k++;
    }
    a[k] = '\0';
    printf("%s", a);
    
    return 0;
}
*/


// COUNTING OR FREQUENCY ARRAY
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int count[7] = {0};
    for (int i = 0; i < n; i++) {
        // int value = a[i];
        count[a[i]]++;
    }
    
    for (int i = 1; i <= 6; i++) {
        printf("%d: %d\n", i, count[i]);
    }
    
    return 0;
}


// COUNTING OR FREQUENCY ARRAY - character
// with alphabetic serial
// int main() {
//     char str[100];
//     scanf("%s", str);
    
//     int count[26] = {0};
//     for (int i = 0; i < strlen(str); i++) {
//         int intValue = str[i] - 'a';
//         count[intValue]++;
//     }
    
//     for (int i = 0; i < 26; i++) {
//         if(count[i] != 0) {
//             printf("%c - %d\n", i + 'a', count[i]);
//         }
//     }
    
//     return 0;
// }


/*
// with user input serial
int main() {
    char str[100];
    scanf("%s", str);
    
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int intValue = str[i] - 'a';
        count[intValue]++;
    }
    
    for (int i = 0; i < strlen(str); i++) {
        int intValue = str[i] - 'a';
        
        if (count[intValue] != 0) {
            printf("%c - %d\n", intValue + 'a', count[intValue]);
        }
        
        count[intValue] = 0;
    }
    
    return 0;
}
*/

