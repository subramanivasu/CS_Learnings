#include<iostream>

using namespace std;
void swap(char S[],int i,int j){
    char temp;
    temp = S[i];
    S[i]=S[j];
    S[j]=temp;

}

int main(){

    char S[] = "Implement";
    int c;
    for(c = 0;S[c]!='\0';c++){

    }
    c=c-1;
    for(int i=0,j=c;i<j;i++,j--){
        swap(S,i,j);
    }

    cout<<S<<endl;
}