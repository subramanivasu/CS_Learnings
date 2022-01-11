#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int * func(int n);

int main(){

    int *A,n;

    cout<<"Enter the Size of Array desired : ";
    cin>>n;
    A = func(n);//Main function pointer A gets the pointer to array from function func.
    
    // A[0] = 23;A[1]=32,A[2]=31,A[3]=34,A[4]=45;
    
    for(int i=0;i<n;i++){
        printf("%d\n",*(A + i));
    }

    return 0;

}

int * func(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));//Array is created in Heap,created inside function func.
    //p = new int[n] ---> for c++

    for(int i=0;i<n;i++){
        p[i] = i*2;
    }

    return (p);
}