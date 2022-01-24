#include<iostream>

using namespace std;

int main(){
    int A[10] = {6,3,8,10,16,7,5,2,9,14};

    int k = 10;int h=16;

    int i=0;int j=0;

    int n=10;
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]+A[j]==k){
                cout<<A[i]<<" "<<A[j]<<" "<<k<<endl;
            }
        }
    }

    cout<<"Using Hash:\n";

    int B[10] = {6,3,8,10,16,7,5,2,9,14};

    int *H = new int(h);

    for(int i=0;i<=h;i++){
        H[i]=0;
    }

    for(int i=0;i<n;i++){
        if(H[k-A[i]]==-1){
            cout<<A[i]<<" "<<k-A[i]<<" "<<k<<endl;
        }
        else{H[A[i]]=-1;}
    }



}