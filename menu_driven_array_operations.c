#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int length;
    int size;

};

void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length]=x;
        arr->length+=1;
    }
}

void display(struct Array arr)
{

    printf("\nThe Elements in the New Array : \n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
} 

void swap(int *a,int *b){

    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;
}

int linear_search(struct Array *arr,int key){
    
    for(int i = 0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[i-1]);
            printf("The Key element is found in Index ");
            return i;
        }
    }
    return -1;
}

int Rbinary_search(struct Array *A,int l,int h,int key){
    int m = ((l+h)/2);

    if(l<=h){
        if(A->A[m]==key){
            return m;
        }
        else if(A->A[m]<key){
            return Rbinary_search(A,m+1,h,key);
        }
        else{
            return Rbinary_search(A,l,m-1,key);
        }
    }
    return -1;
}

int sum(struct Array arr,int n){

    if(n==0){
        return 0;
    }
    else{
        return sum(arr,n-1) + arr.A[n-1];
    }
    return -1;
}

int max_element(struct Array *arr){
    int max = arr->A[0];
    for(int i=1;i<arr->length;i++){
        if(max<arr->A[i]){
            max = arr->A[i];
        }
    }
    return max;
}

int min_element(struct Array *arr){
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
    return (float)sum(*arr,arr->length)/arr->length;
}

int main(){

    struct Array arr1;

    int ch;
    int key,index,l,h,x;

    printf("Enter Size of Array :");
    scanf("%d",&arr1.size);

    arr1.A = (int *)malloc(arr1.size*sizeof(int));

    arr1.length = 0;

    do{
    
        printf("\n0.Get Array Length\n");
        printf("1.Append\n");
        printf("2.Display\n");
        printf("3.Linear Search\n");
        printf("4.Recursive Binary Search\n");
        printf("5.Sum of Elements\n");
        printf("6.Maximum Element\n");
        printf("7.Minimum Element\n");
        printf("8.Get Element\n");
        printf("9.Set Element\n");
        printf("10.Average of Elements\n");
        printf("11.Exit\n\n");

        printf("Chose an option from the follwing : ");
        scanf("%d",&ch);
        
        switch (ch){

            case 0:printf("Array Length : %d\n",arr1.length);
                break;
            case 1: printf("Enter Element to Append : ");
                scanf("%d",&key);

                Append(&arr1,key);
                break;
            case 2:display(arr1);
                    break;

            case 3: printf("Enter the Element to Search : ");
                    scanf("%d",&key);
                    printf("%d\n",linear_search(&arr1,key));
                    break;
            case 4: printf("Enter Element to Search: ");
                scanf("%d",&key);
                printf("%d\n",Rbinary_search(&arr1,0,arr1.length-1,key));
                break;

            case 5:x =sum(arr1,arr1.length);
                printf("Sum :%d \n",x);
                break;
            case 6:printf("The Maximum Element of the Array : %d\n",max_element(&arr1));
                break;
            case 7:printf("The Minimum Element of the Array : %d\n",min_element(&arr1));
                break;
            case 8:printf("Enter the Index : ");
                   scanf("%d",&index);
                   printf("The element at Index %d : %d \n",index,get(&arr1,index));
                   break;
            case 9:printf("Enter the Element and Index to replace : ");
                    scanf("%d %d",&key,&index);
                    x = set(&arr1,index,key);
                    printf(" New Element at index %d :%d  \n",index,x);
                    break;
            case 10: x = avg(&arr1);
                     printf("The Average of all Elements of the Array : %d\n",x);
                     break;
        }

    }while(ch>=0 && ch<11);

    return 0;
    
}
