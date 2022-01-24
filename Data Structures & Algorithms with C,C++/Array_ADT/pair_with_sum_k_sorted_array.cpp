#include<iostream>

using namespace std;

int main(){

    int A[11] = {1,3,4,5,6,8,9,10,11,12,13};

    int n=11;int h=13;int k=10;

    int i=0;int j=n-1;

    while(i<j){
        if(A[i]+A[j] ==k){
            cout<<A[i]<<" "<<A[j]<<" "<<k<<endl;
            i++,j++;
        }
        else if(A[i]+A[j]>k){j--;}
        else if(A[i]+A[j]<k){i++;}
    }

    cout<<"Using Hash:\n";

    int *H=new int(h);

    for(int i=0;i<=h;i++){
        H[i]=0;
    }

    for(int i=0;i<n;i++){
        if(H[k-A[i]]==-1){
            cout<<A[i]<<" "<<k-A[i]<<" "<<k<<endl;
        }
        else{H[A[i]]=-1;}
    }

    return 0;


}