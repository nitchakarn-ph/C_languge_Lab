#include <stdio.h>

void get2DMatrix (int row, int col, int (*dest)[row][col]) {
    int i,j;
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            int tmp;
            printf("x[%d][%d] = ",i,j);
            scanf("%d%*c",&tmp);
            (*dest)[i][j] = tmp;
        }
    }
}

int getIntWithMinMax (int min, int max, char *str) {
    int tmp;
    printf("%s", str);
    scanf("%d%*c",&tmp);
    if (tmp < min || tmp > max) getIntWithMinMax(min,max,str);
    else return tmp;
}

void printMatrix(int row, int col, int data[row][col]){
    int i,j;
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}

void TransposeMatrixByRow (int row, int col, int a[row][col], int b[row][col], int (*dest)[row][1]) {
    int i,j;
    for (i=0;i<row;i++) {
        int tmp = 0;
        for (j=0;j<col;j++) {
            tmp += a[i][j] * b[i][j];
        }
        (*dest)[i][0] = tmp;
    }
}

void TransposeMatrixByCol (int row, int col, int a[row][col], int b[row][col], int (*dest)[1][col]) {
    int i,j;
    for (i=0;i<col;i++) {
        int tmp = 0;
        for (j=0;j<row;j++) {
            tmp += a[j][i] * b[j][i];
        }
        (*dest)[0][i] = tmp;
    }
}

int main () {
    int row = getIntWithMinMax(1,100,"Enter Row: "),
        col = getIntWithMinMax(1,100,"Enter Col: ");

    int matrixA[row][col], matrixB[row][col];
    printf("Enter value of matrixA\n");
    get2DMatrix(row,col,&matrixA);
    printf("Enter value of matrixB\n");
    get2DMatrix(row,col,&matrixB);

    printf("Value of matrixA\n");
    printMatrix(row,col,matrixA);
    printf("Value of matrixB\n");
    printMatrix(row,col,matrixB);

    int matrixTransRow[row][1];
    printf("Transpose Matrix By Row\n");
    TransposeMatrixByRow(row,col,matrixA,matrixB,&matrixTransRow);
    printMatrix(row,1,matrixTransRow);

    int matrixTransCol[1][col];
    printf("Transpose Matrix By Col\n");
    TransposeMatrixByCol(row,col,matrixA,matrixB,&matrixTransCol);
    printMatrix(1,col,matrixTransCol);

    return 0;
}
