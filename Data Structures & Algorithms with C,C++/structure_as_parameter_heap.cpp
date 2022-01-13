#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};


struct Rectangle *func();

int main(){

    struct Rectangle *ptr = func();

    cout<<"Length : "<<ptr->length<<" Breadth : "<<ptr->breadth<<endl;

    return 0; 
}

struct Rectangle *func(){

    struct Rectangle *p;
    //p = new Rectangle();

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 24;
    p->breadth = 27;

    return(p);
}