#include<stdio.h>

int binary_search(int A[],int l,int h,int key){

    while(l<=h){
        int m = (l+h)/2;
        if(A[m]==key){
            printf("The Element is found at Index ");
            return m;
        }
        else if(A[m]<key){
           l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return -1;
}
int main(){
    int A[15] = {2,6,8,12,15,19,25,28,33,36,42,46,49,53,57};
    int l = 0;int h =(sizeof(A)/sizeof(A[0]))-1;int m = ((l+h))/2;int key;
    printf("Enter Key element : ");
    scanf("%d",&key);

    printf("%d",binary_search(A,l,h,key));

}
    