#include <stdio.h>
#include <math.h>


int p(int x,int y){


    //static int c = 1;
    if(y==0){
        return 1;
    }
    if(y>0){
        return p(x,y-1)*x;
        //c = c*x;
    }
    //return c;
    
    // if(x==0){
    //     return 0;
    // }
    // if(y==0){
    //     return 1;
    // }

}

int main(){

    int x=2;int y=3;
    int v = p(x,y);
    printf("%d\n",v);

}