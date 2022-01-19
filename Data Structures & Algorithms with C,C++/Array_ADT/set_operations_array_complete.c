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
    printf("\nThe Elements in the New Array : \n");
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
struct Array* merge_sort_union(struct Array *arr,struct Array *arr1){

    int i,j,k;
    i=j=k;

    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));
    arr2->length = 0;
    while(i<arr->length && j<arr1->length){
        if(arr->A[i]<arr1->A[j]){
            arr2->A[k++] = arr->A[i++];
            arr2->length+=1;
        }
        else if(arr->A[i]==arr1->A[j]){
            arr2->A[k++] = arr->A[i++];
            arr2->length+=1;
            j++;
        }
        else{
            arr2->A[k++] = arr1->A[j++];
            arr2->length+=1;
        }
    }
    //Adding the Last Element from Array 2
    arr2->A[arr2->length] = arr1->A[j];
    arr2->length+=1;

    arr2->size = 25;
    

    return arr2;
}
struct Array* merge_sort_intersection(struct Array *arr,struct Array *arr1){

    int i,j,k;
    i=j=k;

    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));
    arr2->length = 0;
    while(i<arr->length && j<arr1->length){
        if(arr->A[i]<arr1->A[j]){
                i++;
        }
        else if(arr->A[i]==arr1->A[j]){
                arr2->A[k++] = arr->A[i];
                i++,j++;
                arr2->length+=1;
        }    
        else{
             j++;
         }
    }
    arr2->size = 25;

    return arr2;
}
struct Array* merge_sort_difference(struct Array *arr,struct Array *arr1){

    int i,j,k;
    i=j=k;

    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));
    arr2->length = 0;
    while(i<arr->length && j<arr1->length){
        if(arr->A[i]<arr1->A[j]){
                arr2->A[k++] = arr->A[i++];
                arr2->length+=1;
        }
        else if(arr->A[i]==arr1->A[j]){
                i++,j++;
        }    
        else{
             j++;
         }
    }
    arr2->size = 25;

    return arr2;
}
struct Array* sort(struct Array *arr){

    struct Array *arr_copy = arr;

    for(int i=0;i<arr_copy->length-1;i++){
        if(arr_copy->A[i]>arr_copy->A[i+1]){
            swap(&arr_copy->A[i],&arr_copy->A[i+1]);
            sort(arr_copy);
        }
    }
    return arr_copy;
}
int union_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){

    for(int i = 0;i<arr1->length;i++){
        arr3->A[i] = arr1->A[i];
        arr3->length+=1;
    }
    
    int l = arr3->length;
    for(int j=0;j<arr2->length;j++){
        for(int i= 0;i<arr3->length;i++){
            if(arr2->A[j] == arr3->A[i]){
                j++;
            }
        }
        if(j<arr2->length){
            arr3->A[l] = arr2->A[j];
            arr3->length+=1;
            l++;
        }
    }
}
int intersection_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){

    int k = 0;
    for(int j=0;j<arr2->length;j++){
        for(int i= 0;i<arr1->length;i++){
            if(arr1->A[i] ==arr2->A[j]){
                arr3->A[k++] = arr1->A[i];
                arr3->length+=1;
            }
        }
    }
}
struct Array* union_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){
    sort(arr1);
    sort(arr2);

    arr3 = merge_sort_union(arr1,arr2);

    return arr3;
}
struct Array* intersection_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){
    sort(arr1);
    sort(arr2);

    arr3 = merge_sort_intersection(arr1,arr2);
    return arr3;
}
struct Array* difference_set_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){
    int k=0,c=0;

    for(int i=0;i<arr1->length;){
        for(int j=0;j<arr2->length;j++){
            if(arr1->A[i]==arr2->A[j]){
                c=j;
                break;
            }
        }
        if(arr1->A[i]==arr2->A[c]){
            i++;
        }
        else{
            arr3->A[k] = arr1->A[i];
            k+=1;
            arr3->length+=1;
            i++;
        }
    }
}
struct Array* difference_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){
    sort(arr1);
    sort(arr2);

    arr3 = merge_sort_difference(arr1,arr2);

    return arr3;
}
int main(){

    struct Array arr1 = {{3,5,10,4,6},5,25};
    struct Array arr2 = {{12,4,7,10,5},5,25};
    struct Array arr3 = {{0},0,25};
    // struct Array arr1_copy = arr1;
    // struct Array arr2_copy = arr2;
    // struct Array arr3_copy = arr3;

    //Union Sorted

    // union_unsorted(&arr1,&arr2,&arr3);
    // display(arr3);
    // printf("\n\n");

    //Sorting of an Array

    // sort(&arr1);
    // display(arr1);

    //Union of a Sorted Array

    struct Array *union_new;
    union_new = union_sorted(&arr1,&arr2,&arr3);
    display(*union_new);

    //Intersection of an sorted Array

    // struct Array *intersecton_new;
    // intersecton_new = intersection_sorted(&arr1,&arr2,&arr3);
    // display(*intersecton_new);

    //Intersection of an Unsorted Array
    // intersection_unsorted(&arr1,&arr2,&arr3);
    // display(arr3);

    //Difference Set operation in an Unsorted Array

    // difference_set_unsorted(&arr1,&arr2,&arr3);
    // display(arr3);

    //Difference Set Operation in an Sorted Array

    // struct Array *difference_new;
    // difference_new = difference_sorted(&arr1,&arr2,&arr3);
    // display(*difference_new);

    return 0;
}
