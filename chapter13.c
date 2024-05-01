#include <stdio.h>

// PATTERN ONE 
/*
int main() {
    int n, k = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            printf("* ");
        }
        
        k++;
        printf("\n");
    }

    return 0;
}
*/

/*
int main() {
    int n;
    scanf("%d", &n);
    
    int k = n;
    for (int i = 0; i <= n; i++) {
        for (int j = k; j >= 1; j--) {
            printf("* ");
        }
        
        k--;
        printf("\n");
    }
    
    return 0;
}
*/

/*
// PATTERN TWO 
int main() {
    int n;
    scanf("%d", &n);
    
    int s = n - 1, k = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        
        s--;
        k = k + 2;
        printf("\n");
    }
    
    return 0;
}
*/


/*
// PATTERN THREE
int main() {
    int n, k = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++){
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }
    
    return 0;
}
*/

/*
// PATTERN THREE with reverse
int main() {
    int n, k;
    scanf("%d", &n);
    
    k = n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = k; j >= 1; j--) {
            printf("%d ", j);
        }
        
        k--;
        printf("\n");
    }
    
    return 0;
}
*/


/*
// PATTERN FOUR
int main() {
    int n, s, k;
    scanf("%d", &n);
    
    s = n - 1;
    k = 1;
    
    for (int i = 1; i <= (2*n)-1; i++){
        for (int j = 1; j <= s; j++) {
            printf(" ");
        }
        for (int j = 1; j <= k; j++) {
            printf("*");
        }
        if (i <= n - 1) {
            s--;
            k += 2;
        } else {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    
    return 0;
}
*/


/*
// check sum of two value is equal or not
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x;
    scanf("%d", &x);
    
    int check = 0;
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                check = 1;
            }
        }
    }
    
    if (check == 0) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    
    return 0;
}
*/


// SELECTION SORT 
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // ascending order
    // for (int i = 0; i < n-1; i++) {
    //     for (int j = i+1; j < n; j++) {
    //         if (arr[i] > arr[j]) {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    
    // descending order
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}