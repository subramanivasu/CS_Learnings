#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(void){

    int a = 10;
    int *p;

    p = &a;

    
    printf("%p\n",p);
    printf("%p\n",a);

   

    

    return 0;
}