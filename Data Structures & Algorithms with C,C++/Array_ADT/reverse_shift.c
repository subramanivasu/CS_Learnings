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

void display(struct Array *arr){

    for(int i = 0;i<arr->length;i++){
        printf("%d ",arr->A[i]);
    }
}

int max(struct Array *arr){
    int max = arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(max<arr->A[i]){
            max = arr->A[i];
        }
    }
    return max;
}

int min(struct Array *arr){
    int min = arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(min>arr->A[i]){
            min=arr->A[i];
    }
    }
    return min;
}

int get(struct Array *arr,int index){
    if(index>=0 && index<arr->length){
        return arr->A[index];
    }
}

int set(struct Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        return arr->A[index] = x;
    }
}

float avg(struct Array *arr){
    return (float)sum(arr->A,arr->length)/arr->length;
}

void reverse(struct Array *arr){

    int B[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }

    for(int i=0;i<arr->length;i++){
        arr->A[i] = B[i];
    }
    
   
}

void reverse_swap(struct Array *arr){
    for(int i =0,j=arr->length-1;i<j;i++,j--){
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void left_rotation(struct Array *arr){
    int first = arr->A[0];
    for(int i = 0;i<arr->length;i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->A[arr->length-1] = first;
}

void right_rotation(struct Array *arr){
    int last = arr->A[arr->length-1];
    for(int i = arr->length-1;i>=0;i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[0] = last;
}


int main(){
    struct Array arr={{3,2,16,15,17,23,5,8,24,4},sizeof(arr.A)/sizeof(arr.A[0])};

    printf("Sum : %d\n",sum(arr.A,arr.length));
    printf("Avg : %f\n",avg(&arr));
    printf("Element at Index 5 :%d\n",get(&arr,5));
    printf("Index 5 is set to %d\n",set(&arr,5,56));
    printf("New Array :");
    display(&arr);
    printf("\nMax element in Array A : %d\n",max(&arr));
    printf("Min element in Array A : %d\n",min(&arr));
    printf("\n\n");
    
    reverse(&arr);
    display(&arr);
    printf("\nCompleted\n");
    reverse_swap(&arr);
    display(&arr);
    printf("\nCompleted\n");
    left_rotation(&arr);
    display(&arr);
    printf("\nCompleted\n");
    right_rotation(&arr);
    display(&arr);
    printf("\nCompleted\n");
    
}