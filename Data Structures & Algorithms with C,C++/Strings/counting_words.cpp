#include<iostream>

using namespace std;


int main(){

    char  w[] = "Pointer stores the address of a variable";

    int word = 1;

    for(int i=0;w[i]!='\0';i++){
        if(w[i]==' ' && w[i-1]!=' '){
            word+=1;
        }
    cout<<"Number of Words : "<<word<<endl;
}