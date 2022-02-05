#include<iostream>

using namespace std;

int main(){
    long int H=0,x=0;
    char A[] = "finding";

    for(int i=0;A[i]!='\0';i++){
        x=1;
        x = x<<(A[i]-97);
        if((x&H)>0){
            cout<<"Duplicate of "<<A[i]<<" found"<<endl;
        }
        else{H=x|H;}
    }

    
}