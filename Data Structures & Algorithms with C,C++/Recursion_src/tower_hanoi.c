#include <stdio.h>

int tow(int n,int a,int b,int c){

    if(n ==0){
        return 0;

    }

    else{

        tow(n-1,a,c,b);
        printf("Move disk from %d to %d\n",a,c);
        tow(n-1,b,a,c);
    }
}

int main(){

    printf("%d\n",tow(3,1,2,3));
    return 0;
}