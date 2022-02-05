#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char A[] = "decimadl";
    char B[] = "mediccal";

    int H[26]={0};
    int i=0;

    for(i=0;A[i]!='\0';i++){
        H[A[i]-97]+=1;
    }

    for(i=0;B[i]!='\0';i++){
        H[B[i]-97]-=1;
        if(H[B[i]-97]<0){
            cout<<"Not an Anagram"<<endl;
            break;
        }
    }
    if(B[i]=='\0'){
        cout<<"It's an Anagram"<<endl;
    }

    return 0;
}