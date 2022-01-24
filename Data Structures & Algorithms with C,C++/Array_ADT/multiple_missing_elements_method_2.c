#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10]={3,7,4,9,12,6,1,11,2,10};
    int l = 1;
    int h = 12;
    int n = 10;

    int *H = (int *)malloc(h*sizeof(int));
    
    for(int i=0;i<=h;i++){
        H[i] = 0;
    }
    for(int i=0;i<n;i++){
        H[A[i]]++;
    }

    for(int i=l;i<=h;i++){
        if(H[i]==0){
            printf("Missing Element %d ",i);
        }
    }
    
    return 0;
}