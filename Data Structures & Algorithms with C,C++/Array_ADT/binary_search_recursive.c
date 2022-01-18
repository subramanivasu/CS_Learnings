#include<stdio.h>

struct Array{
    int A[15];
    int l;
    int h;
};


int binary_search(struct Array A,int l,int h,int key){
    int m = ((l+h)/2);

    if(l<=h){
        if(A.A[m]==key){
            return m;
        }
        else if(A.A[m]<key){
            return binary_search(A,m+1,h,key);
        }
        else{
            return binary_search(A,l,m-1,key);
        }
    }
    return -1;
}

int main(){
    struct Array A = {{2,6,8,12,15,19,25,28,33,36,42,46,49,53,57},0,(sizeof(A.A)/sizeof(A.A[0]))-1};
    int key;
    printf("Enter key element : ");
    scanf("%d",&key);
    printf("%d\n",binary_search(A,A.l,A.h,key));
    return 0;
}