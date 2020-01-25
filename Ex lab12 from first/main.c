#include <stdio.h>
#include <stdlib.h>


int main () {
    int row1, col1, row2, col2, i, j;

    while (1) {
        printf("%s", "Enter Row1: ");
        scanf("%d%*c",&row1);
        if (row1 >= 1 && row1 <= 20) {
            break;
        }
    }
    while (1) {
        printf("%s", "Enter Col1: ");
        scanf("%d%*c",&col1);
        if (col1 >= 1 && col1 <= 20) {
            break;
        }
    }
    while (1) {
        printf("%s", "Enter Row2: ");
        scanf("%d%*c",&row2);
        if (row2 >= 1 && row2 <= 20) {
            break;
        }
    }
    while (1) {
        printf("%s", "Enter Col2: ");
        scanf("%d%*c",&col2);
        if (col2 >= 1 && col2 <= 20) {
            break;
        }
    }

    int matrixA[row1][col1], matrixB[row2][col2];
    printf("Enter value of matrixA\n");
    for (i=0;i<row1;i++) {
        for (j=0;j<col1;j++) {
            printf("x[%d][%d] = ",i,j);
            scanf("%d%*c",&matrixA[i][j]);
        }
    }
    printf("Enter value of matrixB\n");
    for (i=0;i<row2;i++) {
        for (j=0;j<col2;j++) {
            printf("x[%d][%d] = ",i,j);
            scanf("%d%*c",&matrixB[i][j]);
        }
    }

    //int matrixA[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //int matrixB[3][2] = {{1,0},{3,1},{1,2}};

    printf("Value of matrixA\n");
    for (i=0;i<row1;i++) {
        for (j=0;j<col1;j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("Value of matrixB\n");
    for (i=0;i<row2;i++) {
        for (j=0;j<col2;j++) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("Cross\n");
    int tmp_r = row1>row2?row2:row1;
    int tmp_c = col1>col2?col2:col1;
    int tmp[tmp_r][tmp_c];
    int a,b,c;
    for (a=0; a < tmp_r; a++) {
        for (b=0; b < tmp_c; b++) {
            int sum = 0;
            for (c=0; c < row1; c++) {
                sum += matrixA[a][c] * matrixB[c][b];
            }
            tmp[a][b] = sum;
        }
    }
    for (i=0;i<tmp_r;i++) {
        for (j=0;j<tmp_c;j++) {
            printf("%d ", tmp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
