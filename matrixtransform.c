#include<stdio.h>
int main(){
    int X[3][3], i, j;
printf("enter the element of matrix X:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&X[i][j]);
        }
    }
    printf("\ntransform of matrix X:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", X[j][i]);
        }printf("\n");
    }
    return 0;
}