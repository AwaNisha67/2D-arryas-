#include <stdio.h>

int main() {
    int size1, size2, i, j;
    printf("Enter the number of Rows and Columns: ");
    scanf("%d%d", &size1, &size2);

    int mtrx1[20][30], mtrx2[20][30], sub[20][30];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            printf("Enter element on [%d,%d]: ", i, j);
            scanf("%d", &mtrx1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            printf("Enter element on [%d,%d]: ", i, j);
            scanf("%d", &mtrx2[i][j]);
        }
    }

    // Subtract matrices and store the result
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            sub[i][j] = mtrx1[i][j] - mtrx2[i][j];
        }
    }

    printf("Result of subtraction:\n");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            printf("%d", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
