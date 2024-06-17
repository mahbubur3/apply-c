#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// insert element in an array 
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int p, v;
    scanf("%d %d", &p, &v);
    for (int i = n; i >= p+1; i--) {
        a[i] = a[i-1];
    }
    a[p] = v;
    
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}



// delete element from an array
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int p;
    scanf("%d", &p);
    
    for (int i = p; i < n-1; i++) {
        a[i] = a[i + 1];
    }
    
    for (int i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}



// reverse array elements
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int i = 0, j = n-1;
    while (i < j) {
        int temp; 
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}



// add two array together or copy one to another
int main() {
    int n1;
    scanf("%d", &n1);
    
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    
    int n2;
    scanf("%d", &n2);
    
    int a2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    
    int fullArray[n1+n2];
    for (int i = 0; i < n1; i++) {
        fullArray[i] = a1[i];
    }
    
    int i = n1;
    for (int j = 0; j < n2; j++) {
        fullArray[i] = a2[j];
        i++;
    }
    
    for (int i = 0; i < n1+n2; i++) {
        printf("%d ", fullArray[i]);
    }
        
    return 0;   
}
