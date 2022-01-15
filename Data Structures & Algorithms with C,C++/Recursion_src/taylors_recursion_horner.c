#include<stdio.h>

float tay(int x,int n){

    static int y = 1;
    static float c = 1.0;

    if(n==0){
        return y;
    }

    if(n>0){
        c = ((float)x/(float)n)*c + y;
        tay(x,n-1);
    }
    return c;
}

int main(){
    printf("%lf\n",tay(2,3));
    return 0;
}