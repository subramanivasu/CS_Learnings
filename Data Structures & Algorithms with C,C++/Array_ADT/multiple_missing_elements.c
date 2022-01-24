#include<stdio.h>

int main(){
    int A[10];

    for(int i=0;i<11;i++){
        printf("Enter Element at Index %d (Sorted Order) ",i);
        scanf("%d",&A[i]);
    }

    int n = 11;
    int diff = A[0] - 0;

    for(int i =0;i<n;i++){
        if(A[i] - i!=diff){
            while(diff<A[i]-i){
                printf("Missing Element %d at Index %d\n",i+diff,diff);
                diff++;
            }
        }
    }

    return 0;
}