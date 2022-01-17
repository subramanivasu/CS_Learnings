#include<stdio.h>
#include<stdlib.h>

int main(){

int A[2][2] = {{1,2},{3,4}};

int *B[3];
int **C;

int i,j;

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\n",A[i][j]);

    }

}
printf("\n\n");

for(i=0;i<3;i++){
    B[i] = (int *)malloc(4*sizeof(int));

    }

for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        B[i][j] = i+j;
        printf("B[%d][%d] = %d\n",i,j,B[i][j]);
    }

}
printf("\n\n");
 
C = (int **)malloc(3*sizeof(int *));

for(i=0;i<3;i++){
    C[i] = (int *)malloc(4*sizeof(int));

    }

for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        C[i][j] = i+j;
        printf("C[%d][%d] = %d\n",i,j,C[i][j]);

    }
}

}