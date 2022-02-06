#include<stdio.h>

struct Matrix{
    int A[10];
    int n;
};

void set(struct Matrix *a,int i,int j,int x){
    if(i==j){
        a->A[i-1]=x;
    }
}

int get(struct Matrix *a,int i,int j){
    if(i==j){
        return a->A[i-1];
    }
    else{
        return 0;
    }
}

void display(struct Matrix *a){
    int i,j;

    for(i=1;i<=a->n;i++){
        for(j=1;j<=a->n;j++){
            if(i==j){
                printf("%d ",a->A[i-1]);
            }
            else{printf("%d ",0);}
        }
        printf("\n");
    }
}

int main(){
    struct Matrix m;

    m.n=5;
    set(&m,1,1,3);
    set(&m,2,2,5);
    set(&m,3,3,2);
    set(&m,4,4,8);
    set(&m,5,5,9);

    printf("Get Function for element %d,%d: %d\n",2,2,get(&m,2,2));

    printf("Displaying All Diagonal Elements: \n");
    display(&m);
    return 0;


}