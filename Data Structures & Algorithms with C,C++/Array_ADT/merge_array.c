#include<stdio.h>

struct Array{
    int A[40];
    int length;
    int size;

};

void display(struct Array *arr){

    for(int i = 0;i<arr->length;i++){
        printf("%d ",arr->A[i]);
    }
}



void sort(struct Array *arr,struct Array *arr1,struct Array *arr2){

    int i = 0,j=0,k=0;

    while(i<arr->length && j<arr1->length){
        if(arr->A[i]<arr1->A[j]){
            arr2->A[k++] = arr->A[i++];
        }
        else{
            arr2->A[k++] = arr1->A[j++];
        }
    }

    for(;i<arr->length;i++){
        arr2->A[k++] = arr->A[i];
    }

    for(;j<arr1->length;j++){
        arr2->A[k++] = arr1->A[j];
    }
    arr2->length+=arr->length+arr1->length;
}
int main(){

    struct Array arr = {{2,4,6,8,13,15,17,21,25,33,36,39,41,47,56,59,63,69,100,123},20,sizeof(arr.A)/sizeof(arr.A[0])};
    struct Array arr1 = {{3,4,7,12,14,17,21,24,29,31},10,sizeof(arr.A)/sizeof(arr.A[0])};
    struct Array arr2 = {{0},0,sizeof(arr.A)/sizeof(arr.A[0])};

    sort(&arr,&arr1,&arr2);
    display(&arr2);
    printf("\nSize of Array arr2 :%d , Length of Array arr2 : %d ",sizeof(arr2.A)/sizeof(arr2.A[0]),arr2.length);

}