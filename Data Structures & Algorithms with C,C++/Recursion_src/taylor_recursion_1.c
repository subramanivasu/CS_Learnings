#include <stdio.h>

double tay(int x,int n){

    static double p = 1;
    static double f = 1;
    double v;

    if(n==0){
        return 1;
    }
    else{
        v = tay(x,n-1);
        p = p*x;
        f = n*f;
    }
     return v+(p/f);
    
}


int main(){

    
    printf("%lf\n",tay(4,20));
    return 0;
}