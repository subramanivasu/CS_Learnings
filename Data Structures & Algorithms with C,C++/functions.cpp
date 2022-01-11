#include<iostream>
#include<stdio.h>

using namespace std;

int add(int a,int b); // Prototype of a  dd function
int mult(int a,int b);

int main(){

    int x,y,sum,prod;

    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;

    sum = add(x,y);
    prod = mult(x,y);
    printf("The Sum of X and Y : %d\n",sum);
    printf("The Product of X and Y : %d\n",prod);

    return 0;

}

int add(int a,int b){
    int c;
    c = a+b;
    return(c);
}

int mult(int a,int b){
    int c;
    c = a*b;
    return(c);
}