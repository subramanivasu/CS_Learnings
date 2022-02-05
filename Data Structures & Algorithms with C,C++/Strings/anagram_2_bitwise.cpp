#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char A[] = "decbmal";
    char B[] = "medical";

    long int x=0,H=0;
    int i=0;

    int count = 0;
    for(i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        H=x|H;
    }
    for(i=0;B[i]!='\0';i++){
        x=1;
        x=x<<(B[i]-97);
        if((x&H)<1){cout<<"Not an Anagram"<<endl;break;}

    }
    if(B[i]=='\0'){cout<<"It's an Anagram"<<endl;}
}

