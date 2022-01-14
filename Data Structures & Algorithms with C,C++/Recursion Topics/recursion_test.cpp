#include <stdio.h>
#include <iostream>

using namespace std;

int fun (int n){

    if (n>0){

       
       return fun(n-1) + n;

    }

    return -1;
}

int main(){

    int x = 5;

    printf("%d\n",fun(x));
    

    return 0;
}