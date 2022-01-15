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

int p(int x,int y){


    if(y==0){
        return 1;
    }
    if(y%2==0){
        return p(x*x,y/2);
    }
    else{
        return x* p(x*x,(y-1)/2);
    }
    
       
}

double tay(int x,int n){

    static int y = 0;
    static double c = 1.0;

    if(y<n){
        y = y +1;
        c = ((double)p(x,y)/(double)func(y)) + c;
        tay(x,n);
    }

    return c;
}

int main(){
    printf("%lf\n",tay(2,3));
    return 0;
}

