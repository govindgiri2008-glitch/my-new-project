#include<stdio.h>
int main(){
    int A[3][3], B[3][3], sum[3][3], i, j;
    printf("Enter elements of matrix A:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("elements of matrices A:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of matrix B:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("elements of matrices B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Sum of matrices A and B:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;

}