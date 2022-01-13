#include <iostream>
#include <stdio.h>

using namespace std;

void func1(int n);
void func2(int n);

int main(){

    int x=6;
    func1(x);
    printf("\n");
    func2(x);
    return 0;
}


void func1(int n){

    if(n>0){
        func1(n-1);
        printf("%d\n",n);
    }
}

void func2(int n){

    if(n>0){

        printf("%d\n",n);
        func2(n-1);
        
    }
}