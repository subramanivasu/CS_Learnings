#include<stdio.h>

struct Array{
    int A[10];
    int length;
    int size;

};

void display(struct Array *arr){

    for(int i = 0;i<arr->length;i++){
        printf("%d ",arr->A[i]);
    }
}

void swap(int *a,int *b){

    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;
}
//Inserting in a sorted array
void insert(struct Array *arr,int a){

    //Check for Free Space
    if(arr->length==arr->size){
        return;
    }

    int x = a;
    int length = arr->length - 1;
    int i = length;
    while(arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
}

int is_Sorted(struct Array *arr){
    for(int i = 0;i<=arr->length-2;i++){
        if(arr->A[i] > arr->A[i+1]){
            printf("Not Sorted, Terminated wih ");
            return 0;
        }
    }
    printf("Sorted,Terminated with ");
    return 1;
}

void pos_neg_sort(struct Array *arr){
    int i = 0,j=arr->length-1;

    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}
int main(){

    struct Array arr = {{2,4,6,8,13,15,17,21},8,sizeof(arr.A)/sizeof(arr.A[0])};
    struct Array arr1 = {{-2,3,4,-3,5,6,-8,-1,0},9,sizeof(arr.A)/sizeof(arr.A[0])};
    struct Array arr2 = {{2,4,6,8,13,15,22,17,21},9,sizeof(arr.A)/sizeof(arr.A[0])};


    insert(&arr,9);
    printf("New Sorted Array : ");
    display(&arr);
    pos_neg_sort(&arr1);
    printf("New Sorted Array : ");
    display(&arr1);
    printf("\n\n");
    printf("%d ",is_Sorted(&arr2));
}