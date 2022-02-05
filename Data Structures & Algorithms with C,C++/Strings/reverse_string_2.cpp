#include<iostream>

using namespace std;

int main(){
    char S[] = "Recursion";

    char B[9];
    int i,j;
    for(i=0;S[i]!='\0';i++){}
    i=i-1;

    for(j=0;i>=0;i--,j++){
        B[j]=S[i];
    }

    B[j]='\0';
    cout<<B<<endl;
}