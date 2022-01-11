#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a = 10;
    int &r = a; //Reference must be initialized.It doesn't consume memory.

    cout<<a<<endl;
    cout<<r<<endl;
    return 0;
}