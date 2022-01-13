#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Test{
    int A[5];
    int n;

};

void func(struct Test t1);



int main(){

    struct Test t = {{0,4,6,7,3},5};

    cout<<"Old Array:\n";
    for(int i=0;i<t.n;i++){
        cout<<t.A[i]<<endl;
    }
    func(t);
    return 0;
}

//This function takes in structure as pointer and the function returns the pointer of area
void func(struct Test t1){

    t1.A[0] = 2;
    t1.A[1] = 24;
    //Actual parameter remains unaffected
    cout<<"New Array:\n";
    for(int i=0;i<t1.n;i++){
        cout<<t1.A[i]<<endl;
    }
    
}



