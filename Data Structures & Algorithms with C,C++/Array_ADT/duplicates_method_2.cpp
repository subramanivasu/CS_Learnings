#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int A[10] = {3,6,8,8,10,12,15,15,15,20};

    int n=10;
    int h = 20;

    for(int i=0;i<n-1;i++){
        int count = 1;
        if(A[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(A[j]==A[i]){
                    count+=1;
                    A[j]=-1;
                }
            }
            if(count >1){cout<<"Number "<<A[i]<<" duplicated for "<<count<<" times"<<endl; }
             
        }
        
    }

    cout<<"Using Hash: \n";

    int B[10] = {3,6,8,8,10,12,15,15,15,20};

    int *H = new int(h);

    for(int i=0;i<=h;i++){
        H[i] = 0;
    }

    for(int i=0;i<n;i++){
        H[B[i]]+=1;
    }

    for(int i=0;i<=h;i++){

        if(H[i] >1){
            cout<<"Number "<<i<<" duplicated for "<<H[i]<<" times"<<endl;
        }
    }

    cout<<"Using While Loop : \n";
    int C[10] = {3,6,8,8,10,12,15,15,15,20};


    for(int i=0;i<n;i++){
        if(C[i]==C[i+1]){
            int j=i+1;
            while(C[j]==C[i]){j++;}
            cout<<"Number "<<C[i]<<" was duplicated for "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }

    return 0;
}