#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[25];
    int length;
    int size;

};

void display(struct Array arr)
{
    int i;
    printf("\nThe Elements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
} 

void swap(int *a,int *b){

    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;
}
struct Array* merge_sort(struct Array *arr,struct Array *arr1){

    int i,j,k;
    i=j=k;

    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));

    while(i<arr->length && j<arr1->length){
        if(arr->A[i]<arr1->A[j]){
            arr2->A[k++] = arr->A[i++];
        }
        else if(arr->A[i]==arr1->A[j]){
            arr2->A[k++] = arr->A[i];
            i++,j++;
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
    arr2->length=arr->length+arr1->length;
    arr2->size = 40;

    return arr2;
}

struct Array* sort(struct Array *arr){


    // for(int i=0;i<arr->length;i++){
    //     arr->A[i] = arr->A[i];
    //     arr->length+=1;
    // }

    for(int i=0;i<arr->length-1;i++){
        if(arr->A[i]>arr->A[i+1]){
            swap(&arr->A[i],&arr->A[i+1]);
            sort(arr);
        }
    }
}

int union_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){

    for(int i = 0;i<arr1->length;i++){
        arr3->A[i] = arr1->A[i];
        arr3->length+=1;
    }
    
    int l = arr3->length;
    for(int j=0;j<arr2->length;j++){
        for(int i= 0;i<arr3->length;i++){
            if(arr2->A[j] ==arr3->A[i]){
                continue;
            }
        }
        arr3->A[l] = arr2->A[j];
        l++;
        arr3->length+=1;
    }

}

// int union_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){
// }
int main(){

    struct Array arr1 = {{3,5,10,4,6},5,25};
    struct Array arr2 = {{12,4,7,2,5},5,25};
    struct Array arr3 = {{0},0,25};

    union_unsorted(&arr1,&arr2,&arr3);
    display(arr3);
    printf("\n\n");
    sort(&arr1);
    display(arr1);
    
}
