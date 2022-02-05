#include<iostream>

using namespace std;

void swap(char S[],char l,char i){
    char temp;
    temp = S[l];
    S[l]=S[i];
    S[i]=temp;
}

int main(){
    char w[] = "MalAyaLam";

    int H[26]{0};
    int i,j;

   for(i=0;w[i]!='\0';i++){
       if(w[i]>=65 && w[i]<=90){
           w[i]=w[i]+32;
       }
   }
   i=i-1;
   for(j=0;j<i;i--,j++){

       if(w[j]!=w[i]){
           cout<<"Not a Palindrome"<<endl;
           break;
       }
   }
   if(i==j){
       cout<<"It's a Palindrome"<<endl;
   } 
}