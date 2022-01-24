#include<iostream>

using namespace std;

int main(){

    int A[11] = {3,6,6,8,8,10,12,15,15,15,20};

    int last_duplicate = 0;
    
    int n =12;

    for(int i=0;i<n;i++){
        if(A[i]==A[i+1] && A[i]!=last_duplicate){
            printf("Duplicate of %d found\n",A[i]);
            last_duplicate = A[i];
        }
    }

    int count = 0;
    last_duplicate=0;
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1]){
            if(A[i]==last_duplicate){
                count+=1;
                cout<<"Updated Duplicate Count of "<<A[i]<<" : "<<count<<" duplicates of "<<A[i]<<" found"<<endl;
            }
            else{
                count+=2;
                last_duplicate=A[i];
                cout<<count<<" duplicates of "<<A[i]<<" found"<<endl;
            }
        }
        else{
            count=0;
            last_duplicate=0;
        }
    }
}