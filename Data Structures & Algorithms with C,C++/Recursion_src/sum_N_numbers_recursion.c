#include <stdio.h>

int func(int n){

    // static int c = 0;

    if(n>0){
        //func(n-1);
        return func(n-1) + n;
    }

    // c = c + n;

    
}

int main(){

    int x = 9;
    int v = func(x);
    printf("%d\n",v);
    
    return 0;
}


    