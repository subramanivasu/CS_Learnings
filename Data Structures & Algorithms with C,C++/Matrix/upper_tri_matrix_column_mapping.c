#include<stdio.h>
#include<stdlib.h>

struct Matrix{
    int n;
    int *A;
};

void set(struct Matrix *a,int i,int j,int x){
    
    if(i<=j){
        a->A[((j-1)*(j)/2) + i-1]=x;
    }
}

int get(struct Matrix *a,int i,int j){
    if(i<=j){
        return a->A[((j-1)*(j)/2) + i-1];
    }
    else{
        return 0;
    }
}

void display(struct Matrix *a){
    int i,j;

    for(i=1;i<=a->n;i++){
        for(j=1;j<=a->n;j++){
            if(i<=j){
                printf("%d ",a->A[((j-1)*(j)/2) + i-1]);
            }
            else{printf("%d ",0);}
        }
        printf("\n");
    }
}

int main(){
    struct Matrix m;
    int i,j,x;
    printf("Enter Dimension:");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
    printf("Enter the Elements :\n");
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");

    printf("Get Function for element %d,%d: %d\n",2,2,get(&m,2,2));

    printf("Displaying All Elements of Upper Triangular Matrix(Row): \n");
    display(&m);
    return 0;
}