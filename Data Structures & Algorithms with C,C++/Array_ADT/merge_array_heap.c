#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[40];
    int length;
    int size;

};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
} 

struct Array* merge_sort(struct Array *arr,struct Array *arr1){

    int i,j,k;
    i=j=k;

    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));

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
    arr2->length=arr->length+arr1->length;
    arr2->size = 40;

    return arr2;
}

int main(){

    struct Array arr = {{2,4,6,8,13,15,17,21,25,33,36,39},12,40};
    struct Array arr1 = {{3,4,7,12,14,17,21,24,29,31},10,40};
    struct Array *arr2;

    arr2= merge_sort(&arr,&arr1);
    Display(*arr2);
    printf("\nSize of Array arr2 :%d , Length of Array arr2 : %d ",sizeof(arr2->A)/sizeof(arr2->A[0]),arr2->length);
    return 0;

}

// struct Array
// {
//  int A[10];
//  int size;
//  int length;
// };
// void Display(struct Array arr)
// {
//     int i;
//     printf("\nElements are\n");
//     for(i=0;i<arr.length;i++)
//     printf("%d ",arr.A[i]);
//     } 
// struct Array* Merge(struct Array *arr1,struct Array *arr2)
// {
//     int i,j,k;
//     i=j=k=0;
    
//     struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//         arr3->A[k++]=arr1->A[i++];
//         else
//         arr3->A[k++]=arr2->A[j++];
//     }
    
//     for(;i<arr1->length;i++){
//         arr3->A[k++]=arr1->A[i];
//     }
//     for(;j<arr2->length;j++){
//         arr3->A[k++]=arr2->A[j];
//     }

//     arr3->length=arr1->length+arr2->length;
//     arr3->size=10;
    
//     return arr3;
// }

// int main()
// {
//  struct Array arr1={{2,9,21,28,35},10,5}; 
//  struct Array arr2={{2,3,16,18,28},10,5}; 
//  struct Array *arr3; 
//  arr3=Merge(&arr1,&arr2); 
//  Display(*arr3);
 
// return 0;
// }