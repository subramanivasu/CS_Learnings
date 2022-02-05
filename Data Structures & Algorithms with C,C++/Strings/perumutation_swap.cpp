#include<iostream>

using namespace std;

void swap(char S[],char l,char i){
    char temp;
    temp = S[l];
    S[l]=S[i];
    S[i]=temp;
}

void perm(char S[],int l,int h){
    int i;
    if(l==h){
        cout<<S<<endl;
    }
    else{
        for(i=l;i<=h;i++){
            swap(S,l,i);
            perm(S,l+1,h);
            swap(S,l,i);
        }
    }
}

int main(){
    char S[] = "ABCDEF";
    perm(S,0,5);
}