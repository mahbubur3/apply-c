// array initializing
int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}


// if i need zero
int main() {
    int nums[5] = {0};
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", nums[i]);
    }
    
    return 0;
}



int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = n-1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}




int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            printf("%d\n", nums[i]);
        }
    }
    
    return 0;
}



int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }
    
    printf("%d", sum);
    
    return 0;
}



int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = n-1; i > 0; i--) {
        if (i % 2 != 0) {
            printf("%d ", nums[i]);
        }
    }
    
    return 0;
}
