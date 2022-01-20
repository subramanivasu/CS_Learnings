#include<stdio.h>
#include<stdlib.h>
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

    printf("Array Length %d \n",arr.length);
    printf("\nThe Elements in the New Array : \n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
        printf("Index %d\n",i);
    }
    printf("\n");
} 

int delete(struct Array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
        }
    }
    else if(index==0 && arr->length==0){
        x = arr->A[index];
        arr->A[0] = arr->A[1];
        arr->length--;
        return x;
    }
    
    return 0;
}
void swap(int *a,int *b){

    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;
}

struct Array* merge_sort(struct Array *arr,struct Array *arr1,struct Array *arr3,int ch){

    int i,j,k;
    i=j=k;
    printf("Entered Merge Sort\n");
    if(ch==1){
        int r = 0;
        arr3->length = 0;
        while(i<arr->length && j<arr1->length){
            if(arr->A[i]<arr1->A[j]){
                if(r==arr->A[i]){
                    i++;
                }
                else{
                    arr3->A[k++] = arr->A[i++];
                    arr->A[i] = r;
                    arr3->length+=1;
                }
            }
            else if(arr->A[i]==arr1->A[j]){
                arr3->A[k++] = arr->A[i++];
                arr3->length+=1;
                j++;
            }
            else{
                if(r==arr1->A[j]){
                    j++;
                }
                else{
                    arr3->A[k++] = arr1->A[j++];
                    r= arr1->A[j];
                    arr3->length+=1;
                }
            }

        }
        if(i+1 == arr->length){
            arr3->A[k]=arr->A[i];
            arr3->length+=1;
        }
        else if(j+1 == arr1->length){
            arr3->A[k]=arr1->A[i];
            arr3->length+=1;
        }
        arr3->size = 60;
    }

    else if(ch==2){
        arr3->length = 0;
        while(i<arr->length && j<arr1->length){
            if(arr->A[i]<arr1->A[j]){
                    i++;
            }
            else if(arr->A[i]==arr1->A[j]){
                    arr3->A[k++] = arr->A[i];
                    i++,j++;
                    arr3->length+=1;
            }    
            else{
                j++;
            }
        }
        arr3->size = 60;
    }

    else if(ch==3){
        arr3->length = 0;
        while(i<arr->length && j<arr1->length){
            if(arr->A[i]<arr1->A[j]){
                    arr3->A[k++] = arr->A[i++];
                    arr3->length+=1;
            }
            else if(arr->A[i]==arr1->A[j]){
                    i++,j++;
            }    
            else{
                j++;
            }
        }
        if(j>=arr1->length){
            arr3->A[k]=arr->A[i];
            arr3->length+=1;
        }
        arr3->size = 60;  
    }
    
    return arr3;
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
struct Array* union_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){

    for(int i = 0;i<arr1->length;i++){
        arr3->A[i] = arr1->A[i];
        arr3->length+=1;
    }
    
    int l = arr3->length;
    for(int j=0;j<arr2->length;){
        for(int i= 0;i<arr3->length;i++){
            if(arr2->A[j] == arr3->A[i]){
                j++;
                break;
            }
        }
        if(j<arr2->length){
            arr3->A[l] = arr2->A[j];
            arr3->length+=1;
            l++;
        j++;
        }
    }
    return arr3;
}
struct Array* intersection_unsorted(struct Array *arr1,struct Array *arr2,struct Array *arr3){

    int k = 0;
    for(int j=0;j<arr2->length;j++){
        for(int i= 0;i<arr1->length;i++){
            if(arr1->A[i] ==arr2->A[j]){
                arr3->A[k++] = arr1->A[i];
                arr3->length+=1;
            }
        }
    }
    return arr3;
}
struct Array* union_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3,int ch){
    arr1=sort(arr1);
    arr2=sort(arr2);
    printf("Entering Merge Sort\n");
    arr3 = merge_sort(arr1,arr2,arr3,ch);
    printf("%d \n",arr3->length);

    return arr3;
}
struct Array* intersection_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3,int ch){
    sort(arr1);
    sort(arr2);

    arr3 = merge_sort(arr1,arr2,arr3,ch);
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
    return arr3;
}
struct Array* difference_sorted(struct Array *arr1,struct Array *arr2,struct Array *arr3,int ch){
    arr1=sort(arr1);
    arr2=sort(arr2);

    arr3 = merge_sort(arr1,arr2,arr3,ch);

    return arr3;
}
int main(){

    struct Array arr1,arr2,arr3,arr4;  
    int ch;
    int key,index,r,x;

    printf("Enter Size of Array :");
    scanf("%d",&arr1.size);
    arr2.size = arr1.size;
    arr3.size = arr1.size + arr2.size;

    arr1.A = (int *)malloc(arr1.size*sizeof(int));
    arr2.A = (int *)malloc(arr2.size*sizeof(int));
    arr3.A = (int *)malloc(arr3.size*sizeof(int));

    arr1.length = 0,arr2.length=0,arr3.length=0;


    do{
        printf("List of Operations : \n");
        printf("0.Delete\n");
        printf("1.Append\n");
        printf("2.Display\n");
        printf("3.Union Unsorted\n");
        printf("4.Union Sorted\n");
        printf("5.Intersection Unsorted\n");
        printf("6.Intersection Sorted\n");
        printf("7.Difference Unsorted\n");
        printf("8.Difference Sorted\n");
        printf("9.Array Length\n");
        printf("10.EXIT\n");

        printf("Chose an option: ");
        scanf("%d",&ch);
        struct Array *r;
        if(ch==0){
            printf("Enter which Array (between 1-3) to delete :");
            scanf("%d",&x);
            if(x==1){
                r=&arr1;
            }
            if(x==2){
                r=&arr2; 
            }
            if(x==3){
                r=&arr3; 
            }

        }
        if(ch==1){
            printf("Enter which Array (between 1-2) to append :");
            scanf("%d",&x);
            if(x==1){
                r=&arr1;
            }
            if(x==2){
                r=&arr2;
            }

        }
        if(ch==2){
            int x;
            printf("Enter which Array (between 1-3) to display :");
            scanf("%d",&x);
            if(x==1){
                r=&arr1;
            }
            if(x==2){
                r=&arr2;
            }
            if(x==3){
                r=&arr3;
            }
        }
        if(ch==3){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
        }   
        if(ch==4){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
            
        }
        if(ch==5){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
        }  
        if(ch==6){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
        }  
        if(ch==7){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
        }  
        if(ch==8){
            free(arr3.A);
            arr3.length=0;
            arr4.length=0;
            arr3.A = (int *)malloc(arr3.size*sizeof(int));
        }  
        if(ch==9){
            int x;
            printf("Enter which Array length to be calculated (1-3) :");
            scanf("%d",&x);
            if(x==1){
                r=&arr1;
            }
            if(x==2){
                r=&arr2;
            }
            if(x==3){
                r=&arr3;
            }
        }
        switch (ch){

            case 0: printf("Enter the Index to Delete :");
                    scanf("%d",&index);
                    printf("The Deleted Element at Index %d: %d\n",index,delete(r,index)); 
                    break;
            case 1: printf("Enter Element to Append : ");
                    scanf("%d",&key);
                    Append(r,key);
                    break;
            case 2: display(*r);
                    break;

            case 3: arr4 = *union_unsorted(&arr1,&arr2,&arr3);
                    display(arr4);
                    break;

            case 4: 
                    arr4 = *union_sorted(&arr1,&arr2,&arr3,1);
                    display(arr4);
                    break;
            case 5: arr4 = *intersection_unsorted(&arr1,&arr2,&arr3);
                    display(arr4);
                    break;
            case 6: 
                    arr4= *intersection_sorted(&arr1,&arr2,&arr3,2);
                    display(arr4);
                    break;
            case 7: arr4 = *difference_set_unsorted(&arr1,&arr2,&arr3);
                    display(arr4);
                    break;
            case 8: 
                    arr4 = *difference_sorted(&arr1,&arr2,&arr3,3);
                    display(arr4);
                    break;
            case 9: printf("Array Length : %d\n",r->length);
                    break;
        }
    
    }while(ch>=0 && ch<10);

    return 0;

}