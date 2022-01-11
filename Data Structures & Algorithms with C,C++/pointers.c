#include<stdio.h>
#include<stdlib.h>


int main(void){

    int a = 10;
    int *p;

    p = &a;

    
    printf("%p\n",(void *)p);//Address of a
    printf("%p\n",&a);//address of a

    printf("address of the pointer : %p\n",(void *)&p);//address of pointer variable p
    printf("%d\n",*p);//value of a
    

   

    

    return 0;
}