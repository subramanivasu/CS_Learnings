#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

void area(struct Rectangle r1);



int main(){

    struct Rectangle r = {10,5};

   cout<<"Length: "<<r.length<<" Breadth: "<<r.breadth<<endl;
   cout<<"New Length and Breadth :\n";
   area(r);
}

//This function takes in structure as pointer and the function returns the pointer of area
void area(struct Rectangle r1){

    r1.length = 20;
    r1.breadth= 25;
    //Actual parameter remains unaffected
    cout<<"Length: "<<r1.length<<" Breadth: "<<r1.breadth<<endl;
}



