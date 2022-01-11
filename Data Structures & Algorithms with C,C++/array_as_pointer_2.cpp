#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void func(int *A);

int main(){

    int A[] = {2,4,6,8,10};
    
    cout<<sizeof(A)<<endl;
    

    func(A);

    for(int x:A){
        cout<<x<<endl;
    }

    return 0;

}

void func(int *A){
    cout<<"Size of A in void : "<<sizeof(A)<<endl;//Pointer's size is printed. 8 bytes
    cout<<sizeof(int)<<endl;
    cout<<sizeof(A)/sizeof(int)<<endl;

    A[0] = 234;
}