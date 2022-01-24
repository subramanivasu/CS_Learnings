#include<iostream>

using namespace std;

int main(){

    int A[10] = {5,8,3,9,6,2,10,7,-1,4};

    int maximum =A[0];int minimum=A[0];

    int n=10;

    for(int i=0;i<n;i++){
        if(A[i]<minimum){
            minimum = A[i];
        }
        else if(A[i]>maximum){
            maximum = A[i];
        }
    }

    cout<<"The Maximum Element: "<<maximum<<"\nThe Minimum Element: "<<minimum<<endl;

    return 0;

}