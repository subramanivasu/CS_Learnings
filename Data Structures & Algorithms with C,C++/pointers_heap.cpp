#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(void){

    int *p;
    p = (int *)malloc(5*sizeof(int));

     
    p[0] = 1;p[1] =2 ;p[2] = 3;p[3]= 4;p[4]= 5;


    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    
    free(p);
    // delete [ ] p; -> c++
    return 0;
}