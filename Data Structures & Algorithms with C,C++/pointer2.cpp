#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(void){

    int a[5] = {1,2,3,4,5};
    int *p;

    p = a;
    //p=&a[0];

    for(int i=0;i<5;i++){
        cout<<&a[i]<<" "<<p[i]<<endl;
    }
    

    return 0;
}