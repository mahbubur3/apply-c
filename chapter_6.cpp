// Problem one
int main() {
    int n, i;
    scanf("%d", &n);
    
    if (n == 1) {
        printf("-1\n");
        return 0;
    }
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}



// Problem two
int main() {
    int n, limit;
    int EvenCount = 0, OddCount = 0, PosCount = 0, NegCount = 0;
    scanf("%d", &limit);
    
    for (int i = 0; i < limit; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            EvenCount = EvenCount + 1;
        } else {
            OddCount = OddCount + 1;
        }
        
        if (n > 0) {
            PosCount = PosCount + 1;
        } else if (n < 0) {
            NegCount = NegCount + 1;
        }
    }
    
    printf("Even: %d\n", EvenCount);
    printf("Odd: %d\n", OddCount);
    printf("Positive: %d\n", PosCount);
    printf("Negative: %d\n", NegCount);
     
    return 0;
}



// Problem three
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        if (n == 1999) {
            printf("Correct\n");
            break;
        } else {
           printf("Wrong\n"); 
        }
    }
    
    return 0;
}



// Problem four
int main() {
    int num;
    scanf("%d", &num);
    
    int nums, max = 0;
    for (int i = 1; i <= num; i++) {
        scanf("%d", &nums);
        
        if (nums > max) {
            max = nums;
        }
    }
    printf("%d", max);
    
    return 0;
}



// Problem five
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}



// Problem six
int main() {
    int test;
    scanf("%d", &test);
    for (int t=1;t<=test;t++) {
        int n;
        scanf("%d", &n);
        do {
            printf("%d ", n%10);
            n=n/10;
        }
        while (n != 0);
        printf("\n");
    }
    
    return 0;
}
