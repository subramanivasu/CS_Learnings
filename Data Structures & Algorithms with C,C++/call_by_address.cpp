#include<iostream>

using namespace std;

void swap(int *x,int *y);

int main(){

    int a,b;
    
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;

    swap(&a,&b);

    cout<<"1st Num swapped : "<<a<<endl;
    cout<<"2nd Num swapped : "<<b<<endl;

    return 0;   
}

void swap(int *x,int *y){

    int temp = *x;
    *x=*y;
    *y=temp;
}