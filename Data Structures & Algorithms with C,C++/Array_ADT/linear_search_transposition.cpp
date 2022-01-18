#include<stdio.h>
#include<iostream>

using namespace std;

void swap(int *a,int *b){

    int temp; 
    temp= *a;
    *a=*b;
    *b=temp;
}

int search(int A[],int key,int length){
    for(int i = 0;i<length;i++){
        if(key==A[i]){
            swap(&A[i],&A[i-1]);
            printf("The Key element is found in Index ");
            return i;
        }
    }
    return -1;
}

int main(){

    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int length=10;

    int key,key1;
    printf("Enter Element Between 1 - 10: ");
    cin>>key;
    printf("The Size of Array %d\n",sizeof(A));

    printf("%d\n",search(A,key,length));

    printf("Enter Element Between 1 - 10: ");
    cin>>key1;

    printf("%d\n",search(A,key,length));


    return 0;

}