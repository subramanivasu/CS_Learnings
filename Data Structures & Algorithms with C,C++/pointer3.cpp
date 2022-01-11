#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    
};

int main(void){

    
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl; 
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl; 
    cout<<sizeof(p4)<<endl; 
    cout<<sizeof(p5)<<endl;
    //Every pointer is of size 8 bytes.
    //Pointer size is independant of data type.
    //Older compilers took 4 bytes.


    return 0;

    
}