#include <stdio.h>

// 2D Arrays or Two-Dimensional Arrays

// int matrix[2][3] = {{1, 2, 3}, {10, 20, 30}};


/* int main() {
    // access elements
    int mat[2][3] = {{1, 2, 3}, {10, 20, 30}};
    // printf("%d", mat[1][1]);

    // loop through
    int sat[3][4] = {{10, 20, 40, 60}, {100, 200, 500, 300}, {99, 22, 88, 55}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\n", sat[i][j]);
        }
    }

    return 0;
} */

// ---------------
// user INPUT OUTPUT 
/* int main() {
    int arr[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
} */


/*
// print exact single row
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int s;
    scanf("%d", &s);
    for (int i = 0; i < col; i++) {
        printf("%d ", arr[s][i]);
    }
    return 0;
}
*/

/*
// print exact single row with validation
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int s;
    scanf("%d", &s);
    
    if (s < row) {
        for (int i = 0; i < col; i++) {
            printf("%d ", arr[s][i]);
        }
    } else {
        printf("Entered large row");
    }
    
    return 0;
}
*/

/*
int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int exactCol;
    scanf("%d", &exactCol);
    for (int i = 0; i < row; i++) {
        printf("%d\n", arr[i][exactCol]);
    }
    
    return 0;
}
*/


// CHECK ZERO MATRIX OR NOT
/* int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int countZero = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 0) {
                countZero++;
            }
        }
    }

    int checkElements = row * col;
    if (checkElements == countZero) {
        printf("Zero Matrix\n");
    } else {
        printf("Not Zero Matrix\n");
    }

    return 0;
} */


// CHECK DIAGONAL MATRIX OR NOT
// Primary
/* int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col) {
        flag = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                // check i is equal or not to j
                if (i == j) {
                    continue;
                }
                // check without diagonal other number is zero or not
                if (arr[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Primary Diagonal\n");
    } else {
        printf("Not Primary Diagonal\n");
    }

    return 0;
} */

// Secondary
/* int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col) {
        flag = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i + j == row - 1) {
                    continue;
                }

                if (arr[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Secondary Diagonal\n");
    } else {
        printf("Not Diagonal\n");
    }

    return 0;
} */


// CHECK SCALAR MATRIX OR NOT
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col) {
        flag = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                // check i is equal or not to j
                if (i == j) {
                    // check all diagonal elements are equal or not
                    if (arr[i][j] != arr[0][0]) {
                        flag = 0;
                    }
                // check without diagonal other number is zero or not
                } else if (arr[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Scaler Matrix\n");
    } else {
        printf("Not Scaler Matrix\n");
    }

    return 0;
}


// CHECK UNIT MATRIX OR NOT
// Primary
/* int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col) {
        flag = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == j) {
                    if (arr[i][j] != 1) {
                        flag = 0;
                    }

                } else if (arr[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Unit Matrix\n");
    } else {
        printf("Not Unit Matrix\n");
    }

    return 0;
} */


// Secondary
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    if (row != col) {
        flag = 0;
    } else {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i + j == row - 1) {
                    if (arr[i][j] != 1) {
                        flag = 0;
                    }

                } else if (arr[i][j] != 0) {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1) {
        printf("Secondary Unit Matrix\n");
    } else {
        printf("Not Unit Matrix\n");
    }

    return 0;
}