#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int main(){
    struct Rectangle r = {10,5}; //In C++, struct need not be written, but is a must for C
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    //p = new Rectangle; ---->In C++, just new and structure name ( Rectangle) next to it will make dynamic memory allocation possible.
    cout<<r.length<<"\n"<<r.breadth<<endl;
    p->length=20;
    p->breadth=25;
    cout<<p->length<<"\n"<<p->breadth<<endl;

    free(p);
    return 0;

}