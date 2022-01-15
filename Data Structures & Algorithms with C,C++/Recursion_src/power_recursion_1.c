#include <stdio.h>
#include <math.h>


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
    


int main(){

    int v = p(2,8);
    printf("%d\n",v);

}