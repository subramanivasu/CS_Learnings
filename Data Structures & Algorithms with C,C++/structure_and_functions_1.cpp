#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *p,int l,int b);

int area(struct Rectangle r);

void changelength(struct Rectangle *p,int l);

int main(){
    struct Rectangle r;
    initialize(&r,10,5);
    cout<<"Area : "<<area(r)<<endl;
    changelength(&r,20);
    cout<<"New Area: "<<area(r)<<endl;
    

    return 0;

}

void initialize(struct Rectangle *p,int l,int b){

    p->length =l;
    p->breadth = b;
}

int area(struct Rectangle r){

    return r.length*r.breadth;
}

void changelength(struct Rectangle *p,int l){

    p->length = l;
}