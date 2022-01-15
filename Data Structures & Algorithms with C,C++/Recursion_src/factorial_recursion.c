#include <stdio.h>

int func(int n){

    
    if(n<0){
        printf("Function Terminated with return value ");
        return 0;
    }
    if(n==0){
        return 1;
    }
    return func(n-1)*n;

    

    
}

int main(){

    int x = -6;
    int  v = func(x);
    printf("%d\n",v);
    
    return 0;
}


    