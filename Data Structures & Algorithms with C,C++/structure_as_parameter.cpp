#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int * area(struct Rectangle *r1);
int area1(struct Rectangle *r1);

int main(){

    struct Rectangle r = {10,5};

    printf("Area returned as pointer followed by dereferencing : %d\nArea returned as a value :%d\n",*area(&r),area1(&r));
}

//This function takes in structure as pointer and the function returns the pointer of area
int * area(struct Rectangle *r1){

    int *area,a;
    a = ((*r1).length)*((*r1).breadth);
    area=&a;

    return(area);
}

//This function takes in structure r as pointer and returns the area value

int area1(struct Rectangle *r1){

    int a;
    a = (*r1).length * (*r1).breadth;

    return(a);
}
