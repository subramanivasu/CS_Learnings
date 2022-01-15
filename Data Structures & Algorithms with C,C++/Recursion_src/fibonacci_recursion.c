#include <stdio.h>

int fun(int n){


    static int x;

    static int y=1;

    static int i = 0;

    if(x==0){
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",x+y);
        x=x+1;
    }

    
    static int v;
    
    if(i<(n-3)){
        v = x+y;
        x=y;
        y=v;
        printf("%d\n",v);
        i=i+1;
        fun(n);
    }
    else{
        printf("Function Terminated with ");
        return 0;
        }
    

}

int main(){

    printf("%d\n",fun(5));
    return 0;
}