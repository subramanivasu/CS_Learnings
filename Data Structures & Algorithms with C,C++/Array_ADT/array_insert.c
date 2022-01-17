#include<stdio.h>
#include<stdlib.h>

struct Array{

    int A[10];
    int length;
    int size;
};

    void display(struct Array arr){

        for(int i =0;i<arr.length;i++){
            printf("%d\n",arr.A[i]);
        }
    }
    void create(struct Array *arr,int x){
        
        if(arr->length<arr->size){
            arr->A[arr->length] = x;
            arr->length+=1;

        }
        }
    void insert(struct Array *arr,int index,int x){

        if(index>=0 && index<=arr->length){
            for(int i =arr->length;i>index;i--){
                arr->A[i] = arr->A[i-1];
            }
            arr->A[index] = x;
            arr->length+=1;
        }
    }

    int main(){

        struct Array arr1 = {{23,4,5,6,7},5,10};
        display(arr1);
        create(&arr1,67);
        insert(&arr1,3,434);
        printf("New Array : \n");
        display(arr1);

    }
