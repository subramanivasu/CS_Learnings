#include<stdio.h>

struct Array{

    int A[10];
    int length;
};

int sum(int A[],int n){

    if(n==0){
        return 0;
    }
    else{
        return sum(A,n-1) + A[n];
    }
    return -1;
}

void display(struct Array arr){

    for(int i = 0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    struct Array arr={{3,2,16,15,17,23,5,8,24,4},sizeof(arr.A)/sizeof(arr.A[0])};

    printf("Sum : %d\n",sum(arr.A,arr.length));

    display(arr);
}